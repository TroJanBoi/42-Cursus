/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:36:14 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/03/26 22:06:03 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	main()
{
	char	c = 'Y';
	int	decimal = 12;
	int	octal = 012;
	int	hex = 0x12;
	
	printf("---c character test case---\n");
	if (printf("H") == ft_print_char('H'))
		printf("\nSuccess\n");
	int	chr1 = printf("%c", c);
	int	chr2 = ft_print_char('Y');
	printf("\nExm : %d", chr1);
	printf("\nAns : %d", chr2);
	printf("\n------------end------------\n");

	printf("\n----s string test case----\n");
	if (printf(NULL) == ft_print_str(NULL))
		printf("\nSuccess\n");
	int	str1 = printf(NULL);
	int	str2 = ft_print_str(NULL);
	printf("\nExm : %d", str1);
	printf("\nAns : %d", str2);
	printf("\n-----------end-----------\n");

	printf("\n---d decimal test case---\n");
	if (printf("%d", decimal) == ft_print_num(decimal))
		printf("\nSuccess\n");
	int	dec1 = printf("%d", decimal);
	int	dec2 = ft_print_num(decimal);
	printf("\nExm : %d", dec1);
	printf("\nAns : %d", dec2);
	printf("\n-------EPISODE 1--------\n");
	if (printf("%d", octal) == ft_print_num(octal))
		printf("\nSuccess\n");
	int	dec3 = printf("%d", octal);
	int	dec4 = ft_print_num(octal);
	printf("\nExm : %d", dec3);
	printf("\nAns : %d", dec4);
	printf("\n-------EPISODE 2--------\n");
	if (printf("%d", hex) == ft_print_num(hex))
		printf("\nSuccess\n");
	int	dec5 = printf("%d", hex);
	int	dec6 = ft_print_num(hex);
	printf("\nExm : %d", dec5);
	printf("\nAns : %d", dec6);
	printf("\n-----------end-----------\n");

	printf("\n---i integer in base 10 test case----\n");
	printf("%i\n", decimal);
	printf("%i\n", octal);
	printf("%i", hex);
	printf("\n-----------------end-----------------\n");

	int	deci = 0x12;

	printf("i: %i\n", deci);
	printf("d: %d", deci);

	
	// printf("\n---p pointer test case---\n");
	// int	np = 21;
	// int	ptr = printf("%p", &np);
	// int	ptr2 = printf("%p", &c);
	// printf("\nEmx int : %d", ptr);
	// printf("\nExm chr : %d", ptr2);
	// printf("\n-----------end-----------\n");


}