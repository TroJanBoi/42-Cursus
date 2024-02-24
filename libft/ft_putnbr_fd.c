/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:09:29 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:41:48 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nb;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n >= 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
	}
	ft_putchar_fd((n % 10) + '0', fd);
}

// int	main()
// {
// 	int	nb;

// 	nb = 123;
// 	// ft_putnbr_fd(nb, 1);

// 	// ft_putnbr_fd(2147483647, 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	// ft_putnbr_fd('b', 1);
// }