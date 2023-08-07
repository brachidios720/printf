#include <unistd.h>

void    ft_putchar(char c)
{    
    write(1, &c, 1);
}

char    ft_carac(char *str)
{
    size_t     i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return(*str);
}

int main(void)
{
    char    *str;
    str = "1235266";
    ft_carac(str);
}