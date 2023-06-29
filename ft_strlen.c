/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:47:53 by martcast          #+#    #+#             */
/*   Updated: 2023/06/29 10:47:55 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <string.h>
# include <stdio.h>
# include <unistd.h> 
# include <stdlib.h>
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
