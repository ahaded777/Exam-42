#include <unistd.h>

int     ft_atoi(char *str)
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

int     is_prime(int nbr)
{
    int i = 2;
    if (nbr <= 1)
        return (0);
    while (i * i <= nbr)
    {
        if (nbr % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void    ft_putnbr(int nbr)
{
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    char d = nbr % 10 + 48;
    write(1, &d, 1);
}

int main (int ac, char **av)
{
    if (ac != 2)
        write(1, "0\n", 2);
    else
    {
        int nbr = ft_atoi(av[1]);
        int sum = 0;
        while (nbr > 0)
        {
            if (is_prime(nbr))
                sum += nbr;
            nbr--;
        }
        ft_putnbr(sum);
        write(1, "\n", 1);
    }
    return (0);
}