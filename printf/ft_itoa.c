/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:17:50 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/03/03 17:07:31 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static unsigned int	num_base(int n, int base)
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

int	ft_itoa(int n)
{
	unsigned int	i;
	char			*ptr;
	int				temp;

	i = num_base(n, 10);
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (0);
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	ptr[i] = '\0';
	temp = i;
	while (n)
	{
		ptr[--i] = (n % 10) + 48;
		n /= 10;
	}
	write(1, ptr, temp);
	free(ptr);
	return (temp);
}
