/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:22:45 by martcast          #+#    #+#             */
/*   Updated: 2023/03/22 20:09:44 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función strnstr() en C es una función que busca una subcadena dentro
 * de otra. Toma como argumento dos strings y un size_t. size_t es el número 
 * max de caracteres donde busca desde el incio de haystack. 
 * VALOR DEVUELTO
 * devuelve un puntero al primer carácter de la subcadena
 * si se encontró, si no encuentra nada en needle,
 * devuelve haystack directamente. 
 **** line 35 casteamos haystack desde el return
 */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*hay;
	const char	*nee;

	if (!haystack && len == 0)
		return (NULL);
	hay = haystack;
	nee = needle;
	i = 0;
	if (nee[0] == '\0')
		return ((char *) hay);
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		if (hay[i] == nee[j])
		{
			while (hay[i + j] == nee[j] && nee[j] != '\0' && (i + j) < len)
				j++;
			if (nee[j] == '\0')
				return ((char *) &hay[i]);
		}
		i++;
	}
	return (NULL);
}
