int		max(int* tab, unsigned int len)
{
    if (len == 0)
        return (0);
    int i = 0;
    int c = tab[0];
    while (i < len)
    {
        if (c < tab[i])
            c = tab[i];
        i++;
    }
    return (c);
}