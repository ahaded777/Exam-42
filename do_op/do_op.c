#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[2][0] == '+')
            printf("%d\n", atoi(av[1]) + atoi(av[3]));
        else if (av[2][0] == '-')
            printf("%d\n", atoi(av[1]) - atoi(av[3]));
        else if (av[2][0] == '*')
            printf("%d\n", atoi(av[1]) * atoi(av[3]));
        else if (av[2][0] == '/')
            printf("%d\n", atoi(av[1]) / atoi(av[3]));
        else if (av[2][0] == '%')
            printf("%d\n", atoi(av[1]) % atoi(av[3]));
    }
    else
        write(1, "\n", 1);
    return (0);
}