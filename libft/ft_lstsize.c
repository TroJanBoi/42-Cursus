#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
    
}

// int main()
// {
//     t_list *node = malloc(sizeof(t_list));

//     node->content = "Peerapol";
//     node->next = NULL;

//     int size = ft_lstsize(node);
//     printf("|%d|", size);

//     t_list *second_noce = NULL;

//     int size_two = ft_lstsize(second_noce);
//     printf("\n|%d|", size_two);
// }