/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:29:32 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/22 17:37:09 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

static int	count_word(char const *s, char c)
{
	size_t	i;
	int		count;
	i = 0;
	if (!*s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	
}

int	main()
{
	char	str[] = "Peerapol Srisawat";
	char	ch = ' ';

}