# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 19:50:43 by jlecorne          #+#    #+#              #
#    Updated: 2022/11/29 17:34:42 by jlecorne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_printf.c	\
			srcs/char_printers.c	\
			srcs/unsigned_printer.c	\
			srcs/hexa_printer.c	\

NAME	= libftprintf.a

OBJS	=  ${SRCS:.c=.o}

HEAD	= include/

FLAGS	= -Wall -Wextra -Werror

.c.o	:
		gcc ${FLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS} libft/libft.a
		ar rc ${NAME} ${OBJS} libft/libft.a

libft/libft.a:
	$(MAKE) -C libft
	
all : ${NAME}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all