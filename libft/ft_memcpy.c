/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:52:36 by martcast          #+#    #+#             */
/*   Updated: 2023/03/20 11:09:49 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función memcpy() toma como argumentos dos strings, uno src y otro dst,
 * y un size_t n, que es el numero de bytes que se van a copiar de src a dest.
 * Si hay algún solapamiento entre las ubicaciones de origen y destino,
 * el comportamiento es indefinido
 * VALOR DEVUELTO
 * Devuelve dest*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	char		*dest;
	const char	*origin;
	size_t		i;

	dest = dst;
	origin = src;
	i = 0;
	if (dest == NULL && origin == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = origin[i];
		i++;
	}
	return (dest);
}
