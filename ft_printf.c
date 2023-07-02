/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:38:51 by martcast          #+#    #+#             */
/*   Updated: 2023/06/30 12:12:17 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <stdarg.h>
# include <unistd.h>
int	ft_printf(char const *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_ptr(unsigned long long nb);
int	ft_unsigned_len(unsigned int nb);
int	ft_unsigned(unsigned int nb);
int	ft_hex(unsigned int nb, char format);
int	ft_formats(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	if (format == 'p')
		len += ft_ptr(va_arg(args, unsigned long long));
	if (format == 'i' || format == 'd')
		len += ft_putnbr(va_arg(args, int));
	if (format == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		len += (ft_hex(va_arg(args, unsigned int), format));
	if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_formats(args, str[i]);
		}
		else
			len += ft_putchar(str[i]);
			i++;
	}
	va_end(args);
	return (len);
}