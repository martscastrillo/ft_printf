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



int ft_print_percent()
{
    return ft_putchar('%');
}

int ft_print_char(va_list args)
{
    unsigned char c = (unsigned char)va_arg(args, int);
    return write(1, &c, 1);
}

int ft_print_string(va_list args)
{
    char *s = va_arg(args, char*);
    return ft_putstr(s);
}

int ft_print_pointer(va_list args)
{
    void *p = va_arg(args, void*);
    char buffer[20];
    sprintf(buffer, "%p", p);
    return ft_putstr(buffer);
}

int ft_print_integer(va_list args)
{
    int d = va_arg(args, int);
    ft_putnbr(d);
    int printed_chars = 0;
    if (d < 0)
        printed_chars++; // tener en cuenta el signo '-' en números negativos
    
    int temp = d;
    int digit_count = 0;
    while (temp != 0)
    {
        temp /= 10;
        digit_count++;
    }
    
    return printed_chars + digit_count;
}

int ft_print_unsigned(va_list args)
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
    
    return digit_count;
}

int ft_print_hexadecimal(va_list args)
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
    
    return digit_count;
}

int ft_print_hexadecimal_upper(va_list args)
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
    
    return digit_count;
}


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
                printed_chars += ft_print_percent();
            else if (*str == 'c')
                printed_chars += ft_print_char(args);
            else if (*str == 's')
                printed_chars += ft_print_string(args);
            else if (*str == 'p')
                printed_chars += ft_print_pointer(args);
            else if (*str == 'd' || *str == 'i')
                printed_chars += ft_print_integer(args);
            else if (*str == 'u')
                printed_chars += ft_print_unsigned(args);
            else if (*str == 'x')
                printed_chars += ft_print_hexadecimal(args);
            else if (*str == 'X')
                printed_chars += ft_print_hexadecimal_upper(args);
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
