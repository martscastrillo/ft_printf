/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:21:06 by martcast          #+#    #+#             */
/*   Updated: 2023/05/22 14:21:09 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int ft_putchar(char c);
int ft_putstr(const char *str);
void ft_putnbr(int n);
size_t	ft_strlen(const char *s);

#endif
