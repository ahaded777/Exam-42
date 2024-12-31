#include <unistd.h>
#include <stdlib.h>

int count_word(char *str)
{
    int i = 0;
    int word = 0;
    while (str[i])
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            word++;
        i++;
    }
    return (word);
}

char *ft_strncpy(char *dest, char *src, int len)
{
    int i = 0;
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

char **ft_split(char *str)
{
    int i = 0;
    int e = 0;
    int j = 0;
    int len = 0;
    int len_word = count_word(str);
    char **res = malloc(sizeof(char *) * (len_word + 1));
    if (!res)
        return (NULL);
    while (i < len_word)
    {
        while (str[j] && str[j] == ' ')
            j++;
        e = j;
        while (str[j] && str[j] != ' ')
            j++;
        len = j - e;
        res[i] = malloc(len + 1);
        if (!res[i])
            return (0);
        ft_strncpy(res[i], str + e, len);
        res[i][len] = '\0';
        i++;
    }
    res[len_word] = NULL;
    return (res);
}

void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int len_word = count_word(av[1]);       
        char **str = ft_split(av[1]);
        len_word--;
        while (len_word >= 0)
        {
            ft_putstr(str[len_word]);
            if (len_word != 0)
                ft_putstr(" ");
            len_word--;
        }
    }
    write(1, "\n", 1);
    return (0);
}