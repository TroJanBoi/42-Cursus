/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:48:02 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/21 16:31:44 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p;
	char	*p2;
	size_t	i;

	p = (char *)dest;
	p2 = (char *)src;
	if (!p && !p2)
		return (0);
	i = 0;
	if (p2 < p)
	{
		while (n-- > 0)
			p[n] = p2[n];
	}
	else
	{
		while (i < n)
		{
			p[i] = p2[i];
			i++;
		}
	}
	return (dest);
}

// int	main()
// {
// 	char dest[30] = "Peerapol Boat Srisawat";

//  	printf("Original String    : %s\n", dest);
//  	// memmove(dest, dest + 8, 3);
//  	// printf("memmove overlap    : %s\n", dest);

//  	ft_memmove(dest, dest + 10, 3);
//  	printf("ft_memmove overlap : %s\n", dest);

// 	char	str[100] = "Learningisfun";
// 	char	*first, *second;

// 	first = str;
// 	second = str;
// 	printf("Original String    : %s\n", str);

// 	// memmove(first + 8, first, 10);
// 	// printf("memmove overlap    : %s\n", str);

// 	ft_memmove(second + 10, first, 10);
// 	printf("ft_memmove overlap : %s\n", str);
// }