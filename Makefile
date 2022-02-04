# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 21:38:09 by mgusakov          #+#    #+#              #
#    Updated: 2022/02/04 21:40:26 by mgusakov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

# directories
OBJ_DIR = obj/
SRC_DIR = src/
INC_DIR = includes/
LIBFT_DIR = libft/
TEST_DIR = test/

# complier
CFLAGS = -Wall -Wextra -Werror
CFLAGS += -O3 -march=native -pipe
DEBUG = -g 

# src & obj files
SRC_FILES = flag_c.c flag_di.c flag_p.c flag_pct.c flag_s.c flag_u.c flag_x.c ft_printf.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))
TEST = a.out

# libraries
LIBFT = ft

INCLUDES = -I $(LIBFT_DIR)inc/ -I includes/ 

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\`ft_printf\` [INFO] Library created"

$(OBJ): $(SRC)
	@mkdir -p $(OBJ_DIR)
	@gcc $(CFLAGS) $(INCLUDES) -c $^
	@mv -f *.o $(OBJ_DIR)

clean:
	@make -C $(LIBFT_DIR) clean
	@/bin/rm -rf $(OBJ_DIR)
	@echo "\`ft_printf\` [INFO] Object folder removed"

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(TEST)
	@echo "\`ft_printf\` [INFO] Executable removed"

test: all
	gcc -w test/*.c -L . -l ftprintf $(INCLUDES) -o $(TEST)

re: fclean all

.PHONY: all clean fclean re $(NAME)
