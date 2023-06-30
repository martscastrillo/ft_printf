#include <stdio.h>

int ft_printf(const char *format, ...);
int main (void){
   
    char c;
	char *s;
	int nb;
	unsigned int un;

	c = 'f';
	s = "blablabla";
	nb = -10;
	un = 9454999;
	
	printf("frase: %s letra:%c\n", s, c);
	ft_printf("frase: %s letra:%c printf\n", s, c);

	printf("puntero:%p \n", &s);
	ft_printf("puntero:%p printf\n", &s);

	printf("nb = %d  o %i\n", nb, nb);
	ft_printf("nb = %d  o %i printf\n", nb, nb);

	printf("Sin signo: %u\n", un);
	ft_printf("Sin signo: %u printf\n", un);
	
	printf("Hexa: %x    %X\n", nb, nb);
	ft_printf("Hexa: %x   %X printf\n", nb, nb);
    
	return (0);
}
