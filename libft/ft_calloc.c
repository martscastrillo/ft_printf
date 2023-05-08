/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:32:50 by martcast          #+#    #+#             */
/*   Updated: 2023/03/20 15:13:52 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN
 * La función calloc() indica la cantidad de elementos deseados en ese espacio
 * count, la longitud y el tamaño de datos size y lo rellena con ceros.
 * VALOR DEVUELTO
 * Un puntero a la memoria alocada/asignada
 * */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*new;
	size_t			i;

	new = malloc(count * size);
	i = 0;
	if (new == NULL)
		return (0);
	while (i < count * size)
	{
		new[i] = '\0';
			i ++;
	}
	return (new);
}
