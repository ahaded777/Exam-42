#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int *res;
    if (start > end)
        res = malloc(sizeof(int) * (start - end) + 1);
    else
        res = malloc(sizeof(int) * (end - start) + 1);
    while (start != end)
    {
        res[i++] = end;
        end -= (start > end) ? -1 : 1;
    }
    res[i] = end;
    return (res);
}