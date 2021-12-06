# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 14:17:48 by emgarcia          #+#    #+#              #
#    Updated: 2021/12/06 16:32:28 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_itoa.c ft_strdup.c ft_strlen.c ft_strownjoin.c
OBJS	= ${SRCS:.c=.o}
NAME	= colors
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -fsanitize=address -g3
RM		= rm -rf

all: ${NAME}

$(NAME): ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	@${RM} ${OBJS} ${OBJS_B}

fclean: clean
	@${RM} ${NAME}

re: fclean all