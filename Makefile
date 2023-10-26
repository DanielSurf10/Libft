# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 19:29:07 by danbarbo          #+#    #+#              #
#    Updated: 2023/10/26 15:05:20 by danbarbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -c
SRC		= ${wildcard *.c}
OBJ		= ${SRC:.c=.o}

all: ${NAME}

%.o: %.c
	gcc ${FLAGS} $< -o $@

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

so:			# APAGAR ESSA BOSTA		# APAGAR ESSA BOSTA		# APAGAR ESSA BOSTA
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

teste:		# APAGAR ESSA BOSTA		# APAGAR ESSA BOSTA		# APAGAR ESSA BOSTA
	make fclean
	rm -f libft.h.gch	# APAGAR ESSA BOSTA		# APAGAR ESSA BOSTA
	# rm -f libft.so		# APAGAR ESSA BOSTA		# APAGAR ESSA BOSTA
	make -C ../tester f
	make fclean

.PHONY: all clean fclean re
