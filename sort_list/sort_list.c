#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap = 0;
    t_list *tmp = lst;
    while (lst->next)
    {
        if (cmp(lst->data, lst->next->data) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    return (tmp);
}