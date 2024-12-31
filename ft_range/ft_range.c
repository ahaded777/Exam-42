#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int *res;

    if (start > end)
        res = malloc(sizeof(int) * (start - end) + 1);
    else
        res = malloc(sizeof(int) * (end - start) + 1);
    while (start != end)
    {
        res[i++] = start;
        start += (start > end) ? -1 : 1;
    }
    res[i] = start;
    return (res);
}