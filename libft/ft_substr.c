/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:06:53 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/25 17:50:19 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;

	i = 0;
	if (start >= (unsigned int) ft_strlen(s))
		len = 0;
	else if (len > (unsigned int) ft_strlen(s) - start)
		len = (unsigned int) ft_strlen(s) - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!s || !ptr)
		return (0);
	while (s[start] != '\0' && i < len)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main()
// {
// 	char	str[] = "Peerapol Boat Srisawat";
// 	char	*ret;
// 	char	*ret2;

// 	ret = ft_substr(str, 0, 13);
// 	printf("%s\n", ret);

// 	ret2 = ft_substr(str, 0, -1);
// 	printf("%s", ret2);
// }