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
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_ptr(unsigned long long nb);
int	ft_unsigned_len(unsigned int nb);
int	ft_unsigned(unsigned int nb);
int	ft_hex(unsigned int nb, char format);

static int	ft_ptr_len(unsigned long long nb)
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

static void	ft_ptr_print(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_ptr_print(nb / 16);
		ft_ptr_print(nb % 16);
	}
	else if (nb > 9)
		ft_putchar((nb - 10) + 'a');
	else
		ft_putchar(nb + '0');
}

int	ft_ptr(unsigned long long nb)
{
	ft_putstr("0x");
	if (nb == 0)
	{
		ft_putchar('0');
		return (3);
	}
	else
		ft_ptr_print(nb);
	return (ft_ptr_len(nb) + 2);
}
