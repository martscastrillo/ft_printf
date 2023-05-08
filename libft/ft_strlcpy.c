/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:19:12 by martcast          #+#    #+#             */
/*   Updated: 2023/03/15 13:23:34 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* NON-SENSE
 * DESCRIPCIÓN
 * La función strlcpy() toma como argumentos dos strings y la longitud del
 * string destino. Copia en el string destino el string src.
 * VALOR DEVUELTO
 * La función strlcpy() devuelve la longitud del string src.*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (dstsize -1))
	{
		dst[i] = src[i];
		i ++;
	}
		dst[i] = '\0';
	return (ft_strlen(src));
}
