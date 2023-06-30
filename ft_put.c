/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:46:41 by martcast          #+#    #+#             */
/*   Updated: 2023/06/29 11:33:23 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

int	ft_putstr(const char *str)
{
	return (write(1, str, ft_strlen(str)));
}
// write devuelve la cantidad de caracteres que imprimes

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
// write devuelve la cantidad de caracteres que imprimes

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}
