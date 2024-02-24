#include <libft.h>


t_list  *ft_lstnew(void *content)
{
    t_list *list;

    list = malloc(sizeof(*list));
    if (!list)
        return (0);
    list->content = content;
    list->next = NULL;
    return (list);
}

// int main()
// {
//     t_list *node = ft_lstnew("Peerapol");

//     printf("pointer : %p \n", (void *)node);
//     printf("node : %s", (char *)node->content);
// }
