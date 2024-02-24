/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:01:43 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:41:10 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	int				i;

	i = 0;
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return ((int) p1[i] - (int) p2[i]);
		i++;
	}
	return ((int) p1[i] - (int) p2[i]);
}

// int	main()
// {
// 	char	str1[] = "Peerapol";
// 	char	str2[] = "Peerapol";

// 	printf("| %d |\n", memcmp(str1 + 5, str2, 8));
// 	printf("| %d |", ft_memcmp(str1 + 5, str2, 8));
// }