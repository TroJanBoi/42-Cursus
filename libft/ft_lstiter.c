#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return ;
    while (lst != '\0')
    {
        (f)(lst->content);
        lst = lst->next;
    }
}

// void contest(void *s)
// {
//     printf("Content : %s\n", (char *)s);
// }

// int main()
// {
//     t_list *node = malloc(sizeof(t_list));

//     node->content = "Peerapol";
//     node->next = NULL;

//     ft_lstiter(node, &contest);
// }