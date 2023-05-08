/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:52:58 by martcast          #+#    #+#             */
/*   Updated: 2023/03/20 11:10:28 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*DESCRIPCIÓN
* La función memmove() copia len bytes de la cadena src a la cadena dst.
* Las dos cadenas pueden superponerse y controla la gestion de overlap; 
* la copia siempre se realiza de forma no destructiva.
VALORES DEVUELTOS
* La función memmove() devuelve el valor original de dst.*/
#include "libft.h"

void	reverse_copy(char *d, const char *s, size_t len)
{
	while (len > 0)
	{
		d[len - 1] = s[len - 1];
		len--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		reverse_copy(d, s, len);
	}
	return (dst);
}
