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
    char buffer[20];
    sprintf(buffer, "%x", x);
    ft_putstr(buffer);
    int digit_count = 0;
    while (x != 0)
    {
        x /= 16;
        digit_count++;
    }
    return digit_count;
}

int ft_print_hexadecimal_upper(va_list args)
{
    unsigned int X = va_arg(args, unsigned int);
    char buffer[20];
    sprintf(buffer, "%X", X);
    ft_putstr(buffer);
    
    int digit_count = 0;
    while (X != 0)
    {
        X /= 16;
        digit_count++;
    }
    
    return digit_count;
}
