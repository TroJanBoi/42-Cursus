#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (!lst || !del)
        return ;
    ft_lstclear(&(*lst)->next, del);
    (del)((*lst)->content);
    free(*lst); 
    *lst = NULL;
}
/* main */

void ft_del(void *content)
{
    free(content);
}

// int main()
// {
//     t_list *node = malloc(sizeof(t_list));

//     node->content = "Peerapol";
//     node->next = NULL;

//     ft_lstclear(&node, ft_del);

// }