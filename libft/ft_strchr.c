/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:54:15 by martcast          #+#    #+#             */
/*   Updated: 2023/03/13 18:56:35 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función strchr() toma como argumento un string y un entero.
 *  El entero c es el entero que debe localizar
 * VALOR DEVUELTO
 * Si no encuentra c, devuelve NULL, si lo encuentra, devuelve un puntero
 * a la primera ocurrencia del carácter c en la cadena de caracteres s.*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	charcpy;
	int		i;

	charcpy = (char) c;
	i = 0;
	while (s[i] && s[i] != charcpy)
		i++;
	if (s[i] == charcpy)
		return ((char *) &s[i]);
	return (NULL);
}
