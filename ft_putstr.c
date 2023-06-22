#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
size_t	ft_strlen(const char *s);

int ft_putstr(const char *str)
{
    return(write(1, str, ft_strlen(str)));
}

// write devuelve la cantidad de caracteres que imprimes