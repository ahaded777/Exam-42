#include <unistd.h>

int main (int ac, char **av)
{
    if (ac < 2)
        write(1, "\n", 1);
    else
    {
        int i = 0;
        int j;
        int tab[256] = {0};
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if (tab[(int)av[1][i]] == 0)
                    {
                        write(1, &av[1][i], 1);
                        tab[(int)av[1][i]] = 1;
                    }
                    break;
                }
                j++;
            }
            i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}