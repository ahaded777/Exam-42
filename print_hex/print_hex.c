#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int r = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = (r * 10) + (str[i] - 48);
        i++;
    }
    return (r);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_hex(int num)
{
    char *hex = "0123456789abcdef";
    if (num >= 16)
        ft_print_hex(num / 16);
    ft_putchar(hex[num % 16]);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int num = ft_atoi(av[1]);
        ft_print_hex(num);
    }
    write(1, "\n", 1);
    return (0);
}