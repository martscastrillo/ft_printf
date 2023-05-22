/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:38:51 by martcast          #+#    #+#             */
/*   Updated: 2023/04/25 20:38:54 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_printf(char const *, ...){
    va_list valist;
    va_start(valist);

   
   va_end(valist);


}

int main (void){
    char str1 [] = "Hola don pepito\n";
    ft_printf("%s", str1); 
    printf("%s", str1);
}
