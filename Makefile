# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 10:41:14 by tchaves           #+#    #+#              #
#    Updated: 2023/10/30 14:55:18 by tchaves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

NAME	= libftprintf.a

SRCS	= ft_printf.c srcs/ft_strchr.c srcs/check_format.c srcs/ft_putchar.c \
			srcs/ft_puthex.c srcs/ft_putnbr.c srcs/ft_putstr.c \
			srcs/ft_putunsnbr.c \

OBJS	= $(SRCS:.c=.o)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
