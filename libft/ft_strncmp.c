/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:03:35 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/25 12:33:11 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 == *s2 && *s1)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

// int	main()
// {
// 	const char	str1[] = "Peerasol";
// 	const char	str2[] = "Peesasol";

// 	printf("| %d |\n", strncmp(str1, str2, 8));
// 	printf("| %d |", ft_strncmp(str1, str2, 8));
// }