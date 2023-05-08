/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:33:46 by martcast          #+#    #+#             */
/*   Updated: 2023/03/13 20:35:53 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
* La función atoi() convierte una cadena de caracteres en un valor entero.
* La cadena de entrada es una secuencia de caracteres que se puede interpretar
* como un valor numérico del tipo de retorno especificado. La función deja de
* leer la cadena de entrada en el primer carácter que no puede reconocer
* como parte de un número. Este carácter puede ser el carácter nulo que
* finaliza la cadena.
* VALOR DEVUELTO 
* El int resultante */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	operator;

	i = 0;
	num = 0;
	operator = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			operator = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + str[i] - 48;
		i++;
	}
	return (num * operator);
}
