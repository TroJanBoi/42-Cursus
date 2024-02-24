#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}

// int main()
// {
//     t_list *lst = malloc(sizeof(t_list));
    
//     lst->content = "Peerapol";
//     lst->next = NULL;

//     t_list *new = NULL;
//     ft_lstadd_front(&new, lst);

//     t_list *nd = malloc(sizeof(t_list));

//     nd->content = "Srisawat";
//     nd->next = NULL;

//     ft_lstadd_front(&new, nd);

//     t_list *cur = new;
//     while (new != '\0')
//     {
//         printf("%s\n", (char *)cur->content);
//         cur = cur->next;
//     }
// }