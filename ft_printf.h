#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_format(va_list args, const char format);
int 	ft_putchar(int f);
int	ft_putnbr_base_X(unsigned int nbr);
int	ft_putnbr_base_x(unsigned int nbr);
int    ft_putnbrunsigned(unsigned int n);
size_t	ft_strlen(const char *s);
int		ft_putnbr(int n);
int	ft_putstr(char *str);

#endif

