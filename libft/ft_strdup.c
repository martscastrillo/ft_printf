/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:44:22 by martcast          #+#    #+#             */
/*   Updated: 2023/03/20 15:15:18 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función strdup() asigna suficiente memoria para hacer una copia
 * de la cadena de s1, hace la copia, y devuelve un apuntador a ella.
 * VALOR DEVUELTO
 * Devuelve un puntero al nuevo objeto. */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	len;
	int		i;

	len = ft_strlen(s1);
	new = malloc (sizeof(char) * (len + 1));
	if (new == NULL)
		return (0);
	i = 0;
	while (s1 [i] != '\0')
	{
		new [i] = s1 [i];
		i ++;
	}
	new [i] = '\0';
	return (new);
}
