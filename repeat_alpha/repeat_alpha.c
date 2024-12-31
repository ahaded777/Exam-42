#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int j = 0;
        int c = 0;
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                c = av[1][i] - 97;
                while (j <= c)
                {
                    write(1, &av[1][i], 1);
                    j++;
                }
                c = 0;
                j = 0;
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                c = av[1][i] - 65;
                while (j <= c)
                {
                    write(1, &av[1][i], 1);
                    j++;
                }
                c = 0;
                j = 0;
            }
            else
                 write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}