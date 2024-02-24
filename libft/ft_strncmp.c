/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:03:35 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:42:31 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((int) s1[i] - (int)s2[i]);
		}
		i++;
	}
	return ((int) s1[i] - (int) s2[i]);
}

// int	main()
// {
// 	const char	str1[] = "Peerasol";
// 	const char	str2[] = "Peesasol";

// 	printf("| %d |\n", strncmp(str1, str2, 8));
// 	printf("| %d |", ft_strncmp(str1, str2, 8));
// }