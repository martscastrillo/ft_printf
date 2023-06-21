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

/* int ft_strlen(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
} */

/* void ft_putchar(char c)
{
    write(1, &c, 1);
}
 */
/* void ft_putstr(const char *str)
{
    write(1, str, ft_strlen(str));
} */

/* void ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    
    if (n >= 10)
        ft_putnbr(n / 10);
    
    ft_putchar((n % 10) + '0');
}
 */
int ft_strlen(const char *str);
void ft_putchar(char c);
void ft_putstr(const char *str);
void ft_putnbr(int n);
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
            {
                ft_putchar('%');
                printed_chars++;
            }
            else if (*str == 'c')
            {
                unsigned char c = (unsigned char)va_arg(args, int);
                write(1, &c, 1);
                printed_chars++;
            }
            else if (*str == 's')
            {
                char *s = va_arg(args, char*);
                ft_putstr(s);
                printed_chars += ft_strlen(s);
            }
            else if (*str == 'p')
            {
                void *p = va_arg(args, void*);
                char buffer[20];
                sprintf(buffer, "%p", p);
                ft_putstr(buffer);
                printed_chars += ft_strlen(buffer);
            }
            else if (*str == 'd' || *str == 'i')
            {
                int d = va_arg(args, int);
                ft_putnbr(d);
                if (d < 0)
                    printed_chars++; 
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


