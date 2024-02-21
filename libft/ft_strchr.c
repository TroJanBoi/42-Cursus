/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:24:05 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/21 16:31:44 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *) s);
	return (0);
}

// int	main()
// {
// 	const char	str[] = "Peerapol Boat Srisawat";
// 	int	ch = ' ';
// 	char *ret;
// 	char *s;

// 	s = ft_strchr(str, ch);
// 	ret = strchr(str, ch);

// 	printf("String After : |%c| is - |%s|\n", ch, ret);
// 	printf("String After : |%c| is - |%s|\n", ch, s);
// }