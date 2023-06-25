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
#include <stdarg.h>
#include <stdio.h>

int ft_putchar(char c);
int ft_putstr(const char *str);
void ft_putnbr(int n);
size_t	ft_strlen(const char *s);

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    
    int printed_chars = 0;
    const char *str = format;
    
    while (*str != '\0')
    {
        if (*str == '%')
        {
            str++;
            
            if (*str == '%')
                printed_chars += ft_putchar('%');
            else if (*str == 'c')
            {
                unsigned char c = (unsigned char)va_arg(args, int);
                printed_chars += write(1, &c, 1);
            }
            else if (*str == 's')
            {
                char *s = va_arg(args, char*);
                printed_chars += ft_putstr(s);
            }
            else if (*str == 'p')
            {
                void *p = va_arg(args, void*);
                char buffer[20];
                sprintf(buffer, "%p", p);
                printed_chars +=  ft_putstr(buffer);
            }
            else if (*str == 'd' || *str == 'i')
            {
                int d = va_arg(args, int);
                ft_putnbr(d);
                if (d < 0)
                    printed_chars++; // tener en cuenta el signo '-' en números negativos
                
                int temp = d;
                int digit_count = 0;
                while (temp != 0)
                {
                    temp /= 10;
                    digit_count++;
                }
                
                printed_chars += digit_count;
            }
            else if (*str == 'u')
            {
                unsigned int u = va_arg(args, unsigned int);
                ft_putnbr(u);
                int temp = u;
                int digit_count = 0;
                while (temp != 0)
                {
                    temp /= 10;
                    digit_count++;
                }
                printed_chars += digit_count;
            }
            else if (*str == 'x')
            {
                unsigned int x = va_arg(args, unsigned int);
                ft_putnbr(x);
                int temp = x;
                int digit_count = 0;
                while (temp != 0)
                {
                    temp /= 16;
                    digit_count++;
                }
                
                printed_chars += digit_count;
            }
            else if (*str == 'X')
            {
                unsigned int X = va_arg(args, unsigned int);
                ft_putnbr(X);
                int temp = X;
                int digit_count = 0;
                while (temp != 0)
                {
                    temp /= 16;
                    digit_count++;
                }
                
                printed_chars += digit_count;
            }
        }
        else
        {
            ft_putchar(*str);
            printed_chars++;
        }
        
        str++;
    }
    
    va_end(args);
    
    return printed_chars;
}
