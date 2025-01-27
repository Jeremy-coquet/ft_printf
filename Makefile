# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 11:11:42 by jcoquet           #+#    #+#              #
#    Updated: 2024/03/06 14:34:10 by jcoquet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	=	ft_printf.c \
			ft_putchar_pf.c \
			ft_putnbr_pf.c \
			ft_putnbr_unsigned_pf.c \
			ft_putnbrhexa_pf.c \
			ft_putstr_pf.c \
			ft_putptr_pf.c \
			

OBJS	= $(SRCS:.c=.o)

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re