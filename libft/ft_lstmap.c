/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:26:48 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:26:48 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// t_list lstnew (void *content)
// {
//     t_list *lst;

//     lst = malloc(sizeof(*lst));
//     lst->content = content;
//     lst->next = NULL;
//     return (lst);
// }

// void lstadd_back(t_list **lst, t_list *new)
// {
//     t_list *tmp;
//     if (!lst || !new)
//         return ;
//     if (*lst == NULL)
//     {
//         *lst = new;
//         return ;
//     }
//     tmp = *lst;
//     while (tmp->next)
//         tmp = tmp->next;
//     tmp->next = new;
// }

// void lstclear(t_list **lst, void (*del)(void *))
// {
//     if (!lst || !del)
//         return ;
//     lstclear(&(*lst)->next, ft_del);
//     (del)((*lst)->content);
//     free(*lst);
//     *lst = NULL;
// }

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
//     t_list	*first;
// 	t_list	*new;

// 	if (!f || !del)
// 		return (NULL);
// 	first = NULL;
// 	while (lst)
// 	{
// 		if (!(new = ft_lstnew((f)(lst->content))))
// 		{
// 			while (first)
// 			{
// 				new = first->next;
// 				(*del)(first->content);
// 				free(first);
// 				first = new;
// 			}
// 			lst = NULL;
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&first, new);
// 		lst = lst->next;
// 	}
// 	return (first);
// }

// /* main */

// void    ft_del(void *content)
// {
//     free(content);
// }

// void    *contest(void *s)
// {
//     printf("Content : %s\n", (char *)s);
// }

// int main()
// {
//     t_list *head = NULL;
//     t_list *new_list = NULL;

//     ft_lstadd_back(&head, ft_lstnew("first"));
//     ft_lstadd_back(&head, ft_lstnew("second"));
//     ft_lstadd_back(&head, ft_lstnew("third"));

//     new_list = ft_lstmap(head, &contest, &ft_del);

//     ft_lstclear(&new_list, &ft_del);

//     return 0;
// }

// #include "libft.h"
// #include <string.h>

// static t_list	*lst_new(void *content)
// {
// 	t_list	*new;

// 	new = (t_list *)malloc(sizeof(t_list));
// 	if (!new)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

// static void	lst_clear(t_list **lst, void (*del)(void *))
// {
// 	if (!lst || !del || !(*lst))
// 		return ;
// 	lst_clear(&(*lst)->next, del);
// 	(del)((*lst)->content);
// 	free(*lst);
// 	*lst = NULL;
// }

// static void	lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*ptr;

// 	if (!lst || !new)
// 		return ;
// 	if (!(*lst))
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	ptr = *lst;
// 	while (ptr->next)
// 		ptr = ptr->next;
// 	ptr->next = new;
// }

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_list;
// 	t_list	*new_node;
// 	void	*set;

// 	if (!lst || !f || !del)
// 		return (NULL);
// 	new_list = NULL;
// 	while (lst)
// 	{
// 		set = f(lst->content);
// 		new_node = lst_new(set);
// 		if (!new_node)
// 		{
// 			del(set);
// 			lst_clear(&new_list, (*del));
// 			return (new_list);
// 		}
// 		lstadd_back(&new_list, new_node);
// 		lst = lst->next;
// 	}
// 	return (new_list);
// }

// void *transform_content(void *content)
// {
//     // Check if the content pointer is valid
//     if (content == NULL) {
//         return NULL;
// }
//     char *str = (char *)content;
//     char *result = strdup(str); // Duplicate the original content
//     // Convert each character in the duplicated string to uppercase
//     for (size_t i = 0; result[i]; i++) {
//         result[i] = ft_toupper(result[i]);
//     }
//     return result;
// }

// void free_content(void *content)
// {
//     free(content);
// }

// t_list *lst = lst_new("hello");
// lstadd_back(&lst, lst_new("world"));
// t_list *new_lst = ft_lstmap(lst, transform_content, free_content);
