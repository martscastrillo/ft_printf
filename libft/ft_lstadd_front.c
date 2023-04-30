/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:29:20 by martcast          #+#    #+#             */
/*   Updated: 2023/04/10 18:29:23 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* lst: la dirección de un puntero al primer nodo de una lista.
new: un puntero al nodo que añadir al principio de la lista. */
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
    return ;
}
