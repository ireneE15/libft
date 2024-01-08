# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iescalon <iescalon@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:02:17 by iescalon          #+#    #+#              #
#    Updated: 2023/12/12 09:51:42 by iescalon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC       = gcc
HEADERS_DIR = .
CFLAGS   = -Wall -Wextra -Werror -I $(HEADERS_DIR)
NAME     = libft.a
RM       = rm -rf

SRC_DIR  = src
OBJ_DIR  = obj
BONUS_DIR  = bonus
BONUS_OBJ_DIR  = bonus_obj

# Find every .c file within the SRC_DIR
SRCS = $(wildcard $(SRC_DIR)/*.c)
BONUSS = $(wildcard $(BONUS_DIR)/*.c)
OBJS := $(patsubst ${SRC_DIR}/%.c, ${OBJ_DIR}/%.o, ${SRCS})

all: $(NAME)

${OBJ_DIR}:
	mkdir -p ${OBJ_DIR}

${OBJ_DIR}/%.o: ${SRC_DIR}/%.c | ${OBJ_DIR}
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): ${OBJ_DIR} ${OBJS}
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

${BONUS_OBJ_DIR}:
	mkdir -p $(BONUS_OBJ_DIR)

BONUS_OBJS := $(patsubst ${BONUS_DIR}/%.c, ${BONUS_OBJ_DIR}/%.o, ${BONUSS})

${BONUS_OBJ_DIR}/%.o: ${BONUS_DIR}/%.c | ${BONUS_OBJ_DIR}
	$(CC) $(CFLAGS) -c $< -o $@

bonus: ${BONUS_OBJ_DIR} ${BONUS_OBJS}
	ar rc $(NAME) $(BONUS_OBJS)
	ranlib $(NAME)

so: $(OBJS) $(BONUS_OBJS)
	$(CC) -nostartfiles -shared -o libft.so $^

clean:
	$(RM) $(OBJ_DIR) $(BONUS_OBJ_DIR)

fclean: clean
	$(RM) $(NAME) libft.so

re: fclean all

.PHONY: all clean fclean re