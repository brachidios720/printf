/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:05:15 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/08/16 20:15:48 by raphaelcarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	print;
	
	print = 0;
	if (format == 'c')
		print = ft_putchar(va_arg(args, int));
	if (format == 's')
	    print = ft_putstr(va_arg(args, char *));
    if (format == 'd' || format ==  'i')
		print = ft_putnbr(va_arg(args, int));
	if (format == 'u')
		print = ft_putnbrunsigned(va_arg(args,unsigned int));
	if (format == 'X')
		print = ft_putnbr_base_x(va_arg(args, unsigned int));
	if (format == 'x')
		print = ft_putnbr_base_X(va_arg(args, unsigned int));
	if	(format == '%')
		print = write(1, "%%", 1);
	return(print);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int 	i;
	int 	print;

	i = 0;
	print = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			print += ft_format(args, str[i + 1]);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (print);
}
