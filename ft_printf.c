/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:38:51 by martcast          #+#    #+#             */
/*   Updated: 2023/04/25 20:38:54 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_printf(char const *str, ...){
   int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		/* if (str[i] == '%')
		{
			i++;
			len += ft_formats(args, str[i]);
		}
		else */
			len += ft_putchar(str[i]);
			i++;
	}
	va_end(args);
	return (len);


}

#include <stdio.h>

int main (void){
   
    char c;
	char *s;
	int nb;
	unsigned int un;

	c = 'f';
	s = "blablabla";
	nb = -10;
	un = 9454999;
	
	printf("frase: %s letra:%c\n", s, c);
	ft_printf("frase: %s letra:%c\n", s, c);
	printf("puntero:%p\n", &s);
	ft_printf("puntero:%p\n", &s);
	printf("nb = %d  o %i\n", nb, nb);
	ft_printf("nb = %d  o %i\n", nb, nb);
	printf("Sin signo: %u\n", un);
	ft_printf("Sin signo: %u\n", un);
	printf("Hexa: %x    %X\n", nb, nb);
	ft_printf("Hexa: %x   %X\n", nb, nb);
	return (0);
}
