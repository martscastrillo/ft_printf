/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:15:58 by martcast          #+#    #+#             */
/*   Updated: 2023/03/15 14:43:43 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función tolower() toma un único argumento en forma entero.
 * VALOR DEVUELTO
 * Devuelve el entero sumandole las 32 posiciones que hacen que pase de
 * mayuscyka a minuscula.*/
#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		c = c +32;
	return (c);
}
