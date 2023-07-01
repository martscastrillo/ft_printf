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
 #include <stdio.h>

 #include "ft_printf.h"


 int		ft_putchar(char c);
 int		ft_putstr(const char *str);
 void	ft_putnbr(int n);
size_t	ft_strlen(const char *s);
int		ft_print_percent(void);
int		ft_print_char(va_list args);
int		ft_print_string(va_list args);
int		ft_print_pointer(va_list args);
int		ft_print_integer(va_list args);
int		ft_print_unsigned(va_list args);
int		ft_print_hexadecimal(va_list args);
int		ft_print_hexadecimal_upper(va_list args);
int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			printed_chars;
	char		*str;
	va_start(args, format);
	printed_chars = 0;
	str = (char*)format; 
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				printed_chars += ft_putchar('%');
			else if (*str == 'c')
				printed_chars += ft_print_char(args);
			else if (*str == 's')
				printed_chars += ft_print_string(args);
			else if (*str == 'p')
				printed_chars += ft_print_pointer(args);
			else if (*str == 'd' || *str == 'i')
				printed_chars += ft_print_integer(args);
			else if (*str == 'u')
				printed_chars += ft_print_unsigned(args);
			else if (*str == 'x')
				printed_chars += ft_print_hexadecimal(args);
			else if (*str == 'X')
				printed_chars += ft_print_hexadecimal_upper(args);
		}
		else
		{
			ft_putchar(*str);
			printed_chars++;
		}
		str++;
	}
	va_end(args);
	return (printed_chars);
}