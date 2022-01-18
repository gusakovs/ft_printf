# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 16:17:33 by mgusakov          #+#    #+#              #
#    Updated: 2022/01/14 19:03:34 by mgusakov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wextra -Werror -Wall

# dirs
SRC_DIR = srcs/
OBJ_DIR = obj/
INC_DIR = includes/
LIBFT_DIR = libft/

# files
SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(SRC_FILES:.c=.o)
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME):	$(OBJ)
			@$(MAKE) -C $(LIBFT_DIR)
			@cp $(LIBFT_DIR)/libft.a ./
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)
			@echo "[Library Created]"

$(OBJ): 	$(SRC)
			@mkdir -p $(OBJ_DIR)
			@gcc $(CFLAGS) $(INCLUDES) -c $^
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

.PHONY: all clean fclean re $(NAME)
