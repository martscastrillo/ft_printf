/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:54:40 by martcast          #+#    #+#             */
/*   Updated: 2023/03/15 14:42:59 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función toupper() toma un único argumento en forma entero.
 * VALOR DEVUELTO
 * Devuelve el entero restandole las 32 posiciones que hacen que pase de
 * minuscula a mayuscula.*/
#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 97 && c <= 122))
		c = c -32;
	return (c);
}
