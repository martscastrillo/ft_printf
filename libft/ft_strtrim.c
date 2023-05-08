/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:16:03 by martcast          #+#    #+#             */
/*   Updated: 2023/03/23 16:18:46 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función strtrim() toma como argumentos dos strings, por un lado s1 que es
 * la string que debe ser cortada y por otro lado set, donde aparecen los
 * caracteres a eliminar de ese string. Elimina todos los caracteres que 
 * aparecen en set desde el principio hasta el final, hasta encontrar un
 * caracter no perteneciente a set.
 * VALOR DEVUELTO
 * La string recortada.
 * */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	set_len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i ++;
	j = ft_strlen(s1);
	while (j > 0 && ft_strchr(set, s1[j]))
		j --;
	set_len = (j + 1) - i;
	return (ft_substr(s1, i, set_len));
}
