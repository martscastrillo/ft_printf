/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:51:26 by martcast          #+#    #+#             */
/*   Updated: 2023/03/22 20:08:39 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función strrchr() toma como argumento un string y un entero.
 *  El entero c es el entero que debe localizar. Busca de atrás hacia delante.
 * VALOR DEVUELTO
 * Si no encuentra c, devuelve NULL, si lo encuentra, devuelve un puntero
 * a la primera ocurrencia del carácter c en la cadena de caracteres s.*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	charcpy;
	int		len;
	char	*ss;

	ss = (char *)s;
	len = ft_strlen(s);
	charcpy = (char) c;
	while (len >= 0)
	{
		if (s[len] == charcpy)
			return (&ss[len]);
		len--;
	}
	return (NULL);
}
