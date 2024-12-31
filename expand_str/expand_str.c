#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;
        int s = i;
        while (av[1][i])
            i++;
        i--;
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i--;
        i++;
        while (s < i)
        {
            if (av[1][s] == ' ' || av[1][s] == '\t')
            {
                if (av[1][s - 1] != ' ' && av[1][s - 1] != '\t')
                    write(1, "   ", 3);
            }
            else
                write(1, &av[1][s], 1);
            s++;
        }
    }
    write(1, "\n", 1);
    return (0);
}