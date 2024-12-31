#include <stdlib.h>

int ft_count_word(char *str)
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

char *ft_strlcpy(char *dest, char *src, int len)
{
    int i = 0;
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int e = 0;
    int len = 0;
    int len_word = ft_count_word(str);
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
            return (NULL);
        ft_strlcpy(res[i], str + e, len);
        res[i][len] = '\0';
        i++;
    }
    res[len_word] = NULL;
    return (res);
}