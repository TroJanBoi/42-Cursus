/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:36:14 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/03/14 18:15:38 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	main()
{
	char	c = 'Y';
	
	printf("---c character test case---\n");
	if (printf("H") == ft_print_char('H'))
		printf("\nSuccess\n");
	int	chr1 = printf("%c", c);
	int	chr2 = ft_print_char('Y');
	printf("\nExm : %d", chr1);
	printf("\nAns : %d", chr2);
	printf("\n-----------end-----------\n");

	printf("\n---s string test case----\n");
	if (printf("Peerapol") == ft_print_str("Peerapol"))
		printf("\nSuccess\n");
	int	str1 = printf("");
	int	str2 = ft_print_str("");
	printf("\nExm : %d", str1);
	printf("\nAns : %d", str2);
	printf("\n-----------end-----------\n");

	printf("\n---d decimal test case----\n");
	if (printf("%d", -21) == ft_itoa(-21))
		printf("\nSuccess\n");
	int	dec1 = printf("%d", -21);
	int	dec2 = ft_itoa(-21);
	printf("\nExm : %d", dec1);
	printf("\nAns : %d", dec2);
	printf("\n-----------end-----------\n");

	printf("\n---p pointer test case---\n");
	int	np = 21;
	int	ptr = printf("%p", &np);
	// int	ptr2 = printf("%p", &c);
	printf("\nEmx int : %d", ptr);
	// printf("\nExm chr : %d", ptr2);
	printf("\n-----------end-----------\n");
}