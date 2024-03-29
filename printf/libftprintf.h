/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:29:45 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/03/26 20:47:49 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF
#define LIBFTPRINTF

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

// char	*ft_char(char *str);
// int		ft_printf(const char *format, ...);
int		ft_print_char(char c);
int		ft_print_str(const char *str);
int		ft_print_num(int n);
#endif