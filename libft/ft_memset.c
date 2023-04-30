/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:23:02 by martcast          #+#    #+#             */
/*   Updated: 2023/03/15 10:52:10 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN
 * La función memset() toma como argumentos un string, un valor c (convertido a 
 * unsigned char) y una longitud len. Rellena los n primeros bytes del area 
 * de s con la constante c.
 * VALOR DEVUELTO
 * La función memset() devuelve un puntero al área de memoria s. 
 * El string modificado*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	a;
	size_t			i;

	str = (unsigned char *)b;
	a = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = a;
		i++;
	}
	return (str);
}
