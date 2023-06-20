#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
size_t	ft_strlen(const char *s);

void ft_putstr(const char *str)
{
    write(1, str, ft_strlen(str));
}