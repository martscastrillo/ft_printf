# include <stdarg.h>
# include <unistd.h>
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		len++;
		nb = -nb;
	}
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	int	len;

	len = ft_putnbr_len(nb);
	if (nb == -2147483648)
	{
		ft_putstr("-2");
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (len);
}

static int	ft_ptr_len(unsigned long long nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

static void	ft_ptr_print(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_ptr_print(nb / 16);
		ft_ptr_print(nb % 16);
	}
	else if (nb > 9)
		ft_putchar((nb - 10) + 'a');
	else
		ft_putchar(nb + '0');
}

int	ft_ptr(unsigned long long nb)
{
	ft_putstr("0x");
	if (nb == 0)
	{
		ft_putchar('0');
		return (3);
	}
	else
		ft_ptr_print(nb);
	return (ft_ptr_len(nb) + 2);
}


int	ft_unsigned_len(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_unsigned(unsigned int nb)
{
	int	len;

	len = ft_unsigned_len(nb);
	if (nb > 9)
	{
		ft_unsigned(nb / 10);
		ft_unsigned(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (len);
}



static int	ft_hex_len(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_hex(unsigned int nb, char format)
{
	int	len;

	len = ft_hex_len(nb);
	if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (nb >= 16)
	{
		ft_hex(nb / 16, format);
		ft_hex(nb % 16, format);
	}
	else if (nb > 9)
	{
		if (format == 'x')
			ft_putchar((nb - 10) + 'a');
		else if (format == 'X')
			ft_putchar((nb - 10) + 'A');
	}
	else
		ft_putchar(nb + '0');
	return (len);
}