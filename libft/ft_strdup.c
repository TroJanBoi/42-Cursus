/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:09:50 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/21 16:31:44 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <stddef.h>
// #include <string.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	str = (char *) malloc(sizeof(strlen(s) + 1));
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main()
// {
// 	char	str[] = "Peerapol Boat Srisawat";
// 	char	*ans;
// 	char	*anStrdup;

// 	ans = ft_strdup(str);
// 	anStrdup = strdup(str);

// 	printf("%s\n", ans);
// 	printf("%s", anStrdup);
// }