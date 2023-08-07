/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:05:15 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/07/13 14:20:19 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void    affichernombre(int  count)
// void va_start(va_list ap, last_param)
// int printf(const char *format)

int	ft_format(va_list args, const char format)
{
	int	print;

	print = 0;
	if (format == 'c')
		print += ft_putchar(va_args(args, int));
	if (format == 's')
	    print += ft_putstr(va_args(args, int));
    if (format == 'd' || 'i')
		print += ft_putnbr(va_args(args, int));
	// if (format == 'u')
		// print +=
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int 	i;
	int 	print;

	i = 0;
	print = 0;
	va_start(args, print);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print += ft_format(args, str[i + 1]);
			i++;
		}
		else
		{
			print += write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (print);
}
