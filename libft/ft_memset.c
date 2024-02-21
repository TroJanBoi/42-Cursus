/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:01:22 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/21 16:31:44 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = (unsigned char *) s;
	while (i < n)
	{
		*(p++) = (unsigned char) c;
		i++;
	}
	return (s);
}

// int main()
// {
// 	// char str1[30] = "Peerapol Boat Srisawat";
// 	// memset(str1 + 15, '.', 6);
// 	// printf("%s\n", str1);

// 	char str[30] = "Peerapol Boat Srisawat";
// 	ft_memset(str + 8, '\0', 6);
// 	printf("%s", str);
// }