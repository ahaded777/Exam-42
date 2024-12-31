int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int s = 1;
    int r = 0;
    int c = 0;
    if (str[i] == '-')
    {
        s *= -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            c = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            c = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            c = str[i] - 'A' + 10;
        else
            break;
        r = r * str_base + c;
        i++;
    }
    return (r * s);
}