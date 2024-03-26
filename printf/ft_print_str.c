/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:11:03 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/03/26 22:15:04 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_str(const char *str)
{
	int	i;

	i = 0;
	if (*str)
	{
		while (str[i] != '\0')
		{
			write (1, &str[i], 1);
			i++;
		}
	}
	else
	{
		ft_print_str("(null)");
	}
	return (i);
}
