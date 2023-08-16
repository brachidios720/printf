#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

#define HEXA "0123456789abcdef"


// int 	ft_putchar(int f)
// {
// 	write(1, &f, 1);
//     return(1);
// }

// int	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
//     return(i);
// }

// int		ft_putnbr(int n)
// {
// 	int ret;
	
// 	if(n == 0)
// 		return(1);
// 	if (n == -2147483648)
// 		ft_putstr("-2147483648");
// 	else if (n < 0)
// 	{
// 		ft_putchar('-');
// 		ft_putnbr(-n);
// 	}
// 	else if (n > 9)
// 	{
// 		ft_putnbr(n / 10);
// 		ft_putchar(n % 10 + '0');
// 	}
// 	else
// 		ft_putchar(n + '0');
// 	ret = (n - 1);
// 	ret += 1;
// 	return(ret);
// }

// void    ft_putnbrunsigned(unsigned int n)
// {
// 	if (n > 9)
// 	{
// 		ft_putnbr(n / 10);
// 		ft_putchar(n % 10 + '0');
// 	}
// 	else
// 		ft_putchar(n + '0');
// }

// void	ft_putendl_fd(char *s, int fd)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		write(fd, &s[i], 1);
// 		i++;
// 	}
// 	write(fd, "\n", 1);
// }

// int main(void)
// {
//     ft_putnbrunsigned(16897);
// }

int main(void)
{
	char s1[30] = "coucou bande de nouille";
	char s2[30] = "raph";
	char s3[100] = "rdefgsikneikrehg erghijogtj ijorepgje 54654 68578 3450-ty3490-=t reop-345tklbfdnsghjuy54";

	//ft_printf("first string =%s, second string =%s, third string =%s," ,s1, s2, s3);
	ft_printf("first string =%s", s1);
	printf("\n-------------------------------\n");
	printf("%s,\n %s,\n %s" ,s1, s2, s3);

}