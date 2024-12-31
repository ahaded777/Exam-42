#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int len_word = ft_strlen(av[1]);
        len_word--;
        while (len_word >= 0)
        {
            write(1, &av[1][len_word], 1);
            len_word--;
        }
    }
    write(1, "\n", 1);
    return (0);
}