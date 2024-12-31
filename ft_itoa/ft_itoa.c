#include <stdlib.h>

int ft_len_nbr(int nbr)
{
    int i;
    if (nbr >= 0)
        i = 0;
    else
        i = 1;
    while (nbr != 0)
    {
        nbr = nbr / 10;
        i++;
    }
    return (i);
}

char	*ft_itoa(int nbr)
{
    int len_nbr = ft_len_nbr(nbr);
    char *res = malloc(len_nbr + 1);
    if (!res)
        return (0);
    res[len_nbr] = '\0';
    if (nbr == 0)
        res[0] = '0';
    if (nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    while (nbr != 0)
    {
        res[len_nbr - 1] = (nbr % 10) + 48;
        nbr = nbr / 10;
        len_nbr--;
    }
    return (res);
}