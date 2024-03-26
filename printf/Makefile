# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 15:56:56 by pesrisaw          #+#    #+#              #
#    Updated: 2024/03/26 20:50:14 by pesrisaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

FILE =	ft_printf \
		ft_print_num \
		ft_print_char \
		ft_print_str \
		test_main # for test and remove

SRCS_DIR =	./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILE)))

OBJS_DIR =	./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILE)))

all : $(NAME)

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS) libftprintf.h
	$(AR) $@ $^

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)
	
re : fclean all

.PHONY : all clean fclean re