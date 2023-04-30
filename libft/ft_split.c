/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:02:28 by martcast          #+#    #+#             */
/*   Updated: 2023/04/10 17:43:01 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función split() toma dos argunmentos, el string a separar s y el character
 * delimitador. La función va a separar en strings distintos cada bloque del
 * string que esté entre los delimitadores.
 * VALOR DEVUELTO
 * Devuelve un array de arrays, una matriz, con las strings resultantes de la
 * separación.
 * */

#include "libft.h"

int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while ((s[i] != '\0') && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_len(char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

char	**ft_free(char **str, int j)
{
	while (0 < j)
	{	
		free(str++);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	str = malloc(sizeof(char *) * ((ft_count(s, c)) + 1));
	if (!str)
		return (0);
	while (j < (ft_count(s, c)))
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(s, i, ft_len(s, c, i));
		i = i + ft_len(s, c, i);
		if (!*str)
		{
			return (ft_free(str, j));
		}
		j++;
	}
	str[j] = 0;
	return (str);
}
