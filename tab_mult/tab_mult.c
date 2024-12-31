#include <unistd.h>

int    ft_atoi(char *str)
{
    int i = 0;
    int r = 0;
    while (str[i])
    {
        r = (r * 10) + (str[i] - 48);
        i++;
    }
    return (r);
}

void    ft_putnbr(int nbr)
{
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    int c = (nbr % 10) + 48;
    write(1, &c, 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = 1;
        int nbr = ft_atoi(av[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " ", 1);
            write(1, "x", 1);
            write(1, " ", 1);
            ft_putnbr(nbr);
            write(1, " ", 1);
            write(1, "=", 1);
            write(1, " ", 1);
            ft_putnbr(i * nbr);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}