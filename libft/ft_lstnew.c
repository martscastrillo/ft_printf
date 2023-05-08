/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:05:10 by martcast          #+#    #+#             */
/*   Updated: 2023/04/10 18:05:13 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *tmp;

    tmp = malloc(sizeof(t_list));
    if(!tmp)
        return (NULL);
     tmp->content = content;
        tmp->next = NULL;
    return (tmp);
}
