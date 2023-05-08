/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:45:43 by martcast          #+#    #+#             */
/*   Updated: 2023/03/15 17:58:44 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función memchr() toma como argumento un string, un entero y un size_t.
 * El entero c es el entero que debe localizar, el size_t son los primeros
 * n caracteres donde busca 
 * VALOR DEVUELTO
 * Si no encuentra c en los primeros n caracteres, devuelve NULL.
 * Si lo encuentra, devuelve un puntero con la primera ocurrencia
 * del carácter c en la cadena de caracteres s.*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	num;
	size_t			i;

	str = (unsigned char *)s;
	num = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == num)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
