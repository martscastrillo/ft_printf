/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:59:05 by martcast          #+#    #+#             */
/*   Updated: 2023/03/16 15:11:17 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN
 * La funcion strncmp() compara lexicográficamente las cadenas  s1 y s2.
 * La función strncmp() no compara más de n caracteres. Debido a que strncmp()
 * está diseñado para comparar cadenas en lugar de datos binarios,
 * los caracteres que aparecen después de un `\0' los caracteres no se comparan.
 * VALOR DEVUELTO
 * Si los dos strings son iguales devuelve 0. Si son distintos devuelve la 
 * diferencia entre los caracteres que no coincidan*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (((ss1[i] != '\0' && ss2[i] != '\0') && (ss1[i] == ss2[i])) && i < n)
		i++;
	while ((ss1[i] != ss2[i]) && (i < n))
		return (ss1[i] - ss2[i]);
	return (0);
}
