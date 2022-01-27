# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 16:17:33 by mgusakov          #+#    #+#              #
#    Updated: 2022/01/27 19:04:33 by mgusakov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wextra -Werror -Wall

# dirs
SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = includes/
LIBFT_DIR = libft/

INCLUDES = -I $(LIBFT_DIR)inc -I $(INC_DIR)

# files
SRC_FILES = $(wildcard $(SRC_DIR*.c))
OBJ_FILES = $(SRC_FILES:.c=.o)
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))
TEST = a.out

all: $(NAME)

$(NAME):	$(OBJ)
			@$(MAKE) -C $(LIBFT_DIR)
			@cp $(LIBFT_DIR)/libft.a ./$(NAME)
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)
			@echo "[Library Created]"

$(OBJ): 	$(SRC)
			@mkdir -p $(OBJ_DIR)
			gcc $(CFLAGS) $(INCLUDES) -c $^
			@mv -f *.o $(OBJ_DIR)

clean:		
			@make -C $(LIBFT_DIR) clean
			@rm -rf $(OBJ_DIR)
			@echo "[Obj folder removed]"
		
fclean:		clean
			@make -C $(LIBFT_DIR) fclean
			@rm -f libft.a 
			@rm -f $(NAME)
			@echo "[Executable removed]"
		
re:			fclean all

test: all
			gcc -w test/*.c $(INCLUDES) -o $(TEST)

.PHONY: all clean fclean re $(NAME)
