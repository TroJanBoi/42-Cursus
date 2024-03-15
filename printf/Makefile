# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 15:56:56 by pesrisaw          #+#    #+#              #
#    Updated: 2024/03/14 18:05:13 by pesrisaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILE =	ft_printf \
		ft_itoa \
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