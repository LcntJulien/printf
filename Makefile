# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 19:50:43 by jlecorne          #+#    #+#              #
#    Updated: 2022/11/28 19:54:00 by jlecorne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c	\
			char_printers.c	\
			unsigned_printer.c	\
			hexa_printer.c	\

NAME	= libft.a

OBJS	=  ${SRCS:.c=.o}

HEAD	= includes/

FLAGS	= -Wall -Wextra -Werror

.c.o	:
		gcc ${FLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		ar rc ${NAME} ${OBJS}

all : ${NAME}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all