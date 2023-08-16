/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:19:36 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/08/16 20:41:37 by raphaelcarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define HEXA "0123456789abcdef"
#define hexa "0123456789ABCDEF"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		ft_putnbr(int n)
{
	int ret;
	
	if(n == 0)
		return(1);
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ret += ft_putnbr(-n);
	}
	else if (n > 9)
	{
		ret += ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
	ret = (n - 1);
	ret += 1;
	return(ret);
}

int 	ft_putchar(int f)
{
	write(1, &f, 1);
    return(1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i] != '0')
	{
		write(1, &str[i], 1);
		i++;
	}
    return(i);
}

int    ft_putnbrunsigned(unsigned int n)
{
	int	r;
	
	r = 1;
	if (n > 9)
	{
		r += ft_putnbrunsigned(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
	return(r);
}

int	ft_putnbr_base_x(unsigned int nbr)
{
	int		r;

	r = 1;
	if (nbr >= 16)
	{
		r += ft_putnbr_base_x(nbr / 16);
		ft_putnbr_base_x(nbr % 16);
	}
	else
		ft_putchar(HEXA[nbr]);
	return (r);
}

int	ft_putnbr_base_X(unsigned int nbr)
{
	int		r;

	r = 1;
	if (nbr >= 16)
	{
		r += ft_putnbr_base_x(nbr / 16);
		ft_putnbr_base_x(nbr % 16);
	}
	else
		ft_putchar(hexa[nbr]);
	return (r);
}