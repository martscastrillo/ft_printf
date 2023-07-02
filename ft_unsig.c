/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:47:53 by martcast          #+#    #+#             */
/*   Updated: 2023/06/29 11:37:05 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int	ft_printf(char const *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_ptr(unsigned long long nb);
int	ft_unsigned_len(unsigned int nb);
int	ft_unsigned(unsigned int nb);
int	ft_hex(unsigned int nb, char format);

int	ft_unsigned_len(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_unsigned(unsigned int nb)
{
	int	len;

	len = ft_unsigned_len(nb);
	if (nb > 9)
	{
		ft_unsigned(nb / 10);
		ft_unsigned(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (len);
}



static int	ft_hex_len(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_hex(unsigned int nb, char format)
{
	int	len;

	len = ft_hex_len(nb);
	if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (nb >= 16)
	{
		ft_hex(nb / 16, format);
		ft_hex(nb % 16, format);
	}
	else if (nb > 9)
	{
		if (format == 'x')
			ft_putchar((nb - 10) + 'a');
		else if (format == 'X')
			ft_putchar((nb - 10) + 'A');
	}
	else
		ft_putchar(nb + '0');
	return (len);
}