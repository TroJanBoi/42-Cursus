/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:17:50 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:28:17 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_base(int n, int base)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n && ++i)
	{
		n = n / base;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ptr;

	i = num_base(n, 10);
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (0);
	if (n == 0)
		ptr[0] = '0';
	else if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n)
	{
		ptr[--i] = (n % 10) + 48;
		n /= 10;
	}
	return (ptr);
}

// int	main()
// {
// 	int	nbr = 123;
// 	int num = -123;
// 	int zero = 0;

// 	printf("Answer : %s\n", ft_itoa(nbr));
// 	printf("Answer : %s\n", ft_itoa(num));
// 	printf("Answer : %s\n", ft_itoa(zero));
// }