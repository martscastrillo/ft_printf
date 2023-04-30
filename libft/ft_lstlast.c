/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:39:05 by martcast          #+#    #+#             */
/*   Updated: 2023/04/10 20:39:23 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
    struct s_list *p,*q;
  q = creanodo(); /* crea un nuevo nodo */
  q->content = x; /* copiar los datos */
  q->next = NULL;
/*   if (lst == NULL)
    return q; */
  /* la lista argumento no es vacía. Situarse en el último */
  p = lst;
  while (p->next != NULL)
    p = p->next;
    p->next = q;
  return lst;
}
