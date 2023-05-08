/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:18:29 by martcast          #+#    #+#             */
/*   Updated: 2023/03/28 09:51:12 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función striteri() toma como argumentos un string de caracteres s y una
 * funcion. Esta función toma como argumentos un int que equivale al indice del
 * string y el char equivale a el contenido del string en esa posicion concreta. 
 *  Esta función transforma de alguna manera caracter a caracter.
 * VALOR DEVUELTO
 * NADA */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
