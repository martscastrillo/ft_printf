/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:46:12 by martcast          #+#    #+#             */
/*   Updated: 2023/06/29 11:29:11 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int		ft_putchar(char c);
int		ft_putstr(const char *str);
void	ft_putnbr(int n);
size_t	ft_strlen(const char *s);

int	ft_print_percent(void)
{
	return (ft_putchar('%'));
}	

int	ft_print_char(va_list args)
{
	unsigned char	c;

	c = (unsigned char)va_arg(args, int);
	return (write(1, &c, 1));
}

int	ft_print_string(va_list args)
{
	 char *s;

    s = va_arg(args, char *);
    if (s == NULL) {
        s = "(null)";
    }
    return ft_putstr(s);
}

int	ft_print_pointer(va_list args)
{
	void	*p;
	char	buffer[20];

	p = va_arg(args, void *);
	sprintf(buffer, "%p", p);
	return (ft_putstr(buffer));
}

int	ft_print_integer(va_list args)
{
	int	d;
	int	printed_chars;
	int	temp;
	int	digit_count;

	d = va_arg(args, int);
	ft_putnbr(d);
	printed_chars = 0;
	digit_count = 0;
	if (d == 0)
    {
        ft_putchar('0');
		printed_chars = 1;
    }
	else if (d < -2147483648)
    {
        ft_putnbr(d);
        digit_count = 10;
        printed_chars += digit_count;
    }
	else if (d < 0)
		printed_chars++;
	temp = d;
	while (temp != 0)
	{
		temp /= 10;
		digit_count++;
	}
	return (printed_chars + digit_count);
}

int	ft_print_unsigned(va_list args)
{
	unsigned int	u;
	int				temp;
	int				digit_count;

	u = va_arg(args, unsigned int);
	temp = u;
	digit_count = 0;
	ft_putnbr(u);
	while (temp != 0)
	{
		temp /= 10;
		digit_count++;
	}
	return (digit_count);
}

int	ft_print_hexadecimal(va_list args)
{
	unsigned int	x;
	int				digit_count;
	char			buffer[20];

	digit_count = 0;
	x = va_arg(args, unsigned int);
	sprintf(buffer, "%x", x);
	ft_putstr(buffer);
	while (x != 0)
	{
		x /= 16;
		digit_count++;
	}
	return (digit_count);
}

int	ft_print_hexadecimal_upper(va_list args)
{
	unsigned int	big_x;
	int				digit_count;
	char			buffer[20];

	big_x = va_arg(args, unsigned int);
	digit_count = 0;
	sprintf(buffer, "%X", big_x);
	ft_putstr(buffer);
	while (big_x != 0)
	{
		big_x /= 16;
		digit_count++;
	}
	return (digit_count);
}
