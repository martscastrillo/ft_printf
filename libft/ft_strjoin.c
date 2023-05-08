/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:09:23 by martcast          #+#    #+#             */
/*   Updated: 2023/03/22 21:09:58 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función strjoin() toma como argumentos dos strings s1 y s2.
 * VALOR DEVUELTO
 * La concatenación de los dos strings.
 * */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_join;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	str_join = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (str_join == NULL)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		str_join[i] = s1[i];
		i ++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str_join[i] = s2[j];
		i ++;
		j ++;
	}
	str_join[i] = '\0';
	return (str_join);
}
