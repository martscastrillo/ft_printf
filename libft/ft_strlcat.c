/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:05:43 by martcast          #+#    #+#             */
/*   Updated: 2023/03/22 20:10:46 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* NON-SENSE
* DESCRIPCIÓN/
* La función strlcat() agrega una copia de la cadena s1 a s2 
* (incluye el carácter nulo de terminación) al final de la cadena s1.
* Es carácter inicial de s2 sobreescribe el carácter nulo existente al 
* final de s1.Si la copia se lleva a cabo entre objetos que se superponen,
* el comportamiento queda indefinido. 
* VALOR DEVUELTO
* Devuelve la sum de la longitud de s1 sumado a dstsize*/
#include "libft.h"

size_t	ft_strlcat(char *dst,
		const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	s_len;

	if (!dst && dstsize == 0)
		return (0);
	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	i = d_len;
	if (dstsize <= d_len)
		return (s_len + dstsize);
	while (i < (dstsize - 1) && *src)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}
