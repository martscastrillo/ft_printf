/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:08:20 by martcast          #+#    #+#             */
/*   Updated: 2023/03/28 09:52:11 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función strmapi() toma como argumentos un string de caracteres s y una
 * funcion. Esta función toma como argumentos un int que equivale al indice   
 * del string y el char equivale a el contenido del string en esa posicion
 * concreta. Esta función transforma de alguna manera caracter a caracter.
 * VALOR DEVUELTO
 * Devuelve el string resultante de ejecutar la función del argumento.  */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*str;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
