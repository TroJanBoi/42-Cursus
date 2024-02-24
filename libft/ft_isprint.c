/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:33:13 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:30:02 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 1 && c <= 31 && c != 127)
		return (0);
	return (1);
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	printf("%d", isprint('2'));
// 	printf(" %d", ft_isprint('A'));
// }