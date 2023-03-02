# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 19:50:43 by jlecorne          #+#    #+#              #
#    Updated: 2023/02/20 21:33:08 by jlecorne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_printf.c	\
			srcs/char_printers.c	\
			srcs/unsigned_printer.c	\
			srcs/hexa_printer.c	\
			srcs/ptr_printer.c

NAME	= libftprintf.a

OBJS	=  ${SRCS:.c=.o}

HEAD	= include

FLAGS	= -Wall -Wextra -Werror

.c.o	:
		gcc ${FLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

all: $(NAME)

${NAME} : libft/libft.a ${OBJS}
		ar rc ${NAME} ${OBJS} libft/*.o

libft/libft.a:
	$(MAKE) -C libft

clean :
		rm -f ${OBJS}
		$(MAKE) clean -C libft

fclean : clean
		rm -f ${NAME}
		$(MAKE) fclean -C libft

re : fclean all