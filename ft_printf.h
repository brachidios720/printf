#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_format(va_list args, const char format);
int	ft_printf(const char *str, ...);
int 	ft_putchar(int f);


#endif

