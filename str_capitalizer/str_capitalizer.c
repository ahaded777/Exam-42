#include <unistd.h>

int main(int ac, char **av)
{
    if (ac < 2)
        write(1, "\n", 1);
    else
    {
        int i = 1;
        while (i < ac)
        {
            int j = 0;
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
                av[i][j] -= 32;
            write(1, &av[i][j], 1);
            j++;
            while (av[i][j])
            {
                if (av[i][j] >= 'A' && av[i][j] <= 'Z')
                    av[i][j] += 32;
                if ((av[i][j] >= 'a' && av[i][j] <= 'z') && av[i][j - 1] == ' ')
                    av[i][j] -= 32;
                write(1, &av[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}