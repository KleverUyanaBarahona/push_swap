# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klever <klever@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 15:07:20 by kbarahon          #+#    #+#              #
#    Updated: 2021/09/24 19:59:47 by klever           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GNL= gnl/get_next_line_bonus.c 
NAME= push_swap.a
SRC= $(GNL) ./srcs/parse.c ./srcs/ft_atoi_check.c ./srcs/utils.c ./srcs/utils_2.c ./srcs/utils_3.c ./srcs/error.c ./srcs/function_swap.c ./srcs/functions_rotate.c ./srcs/functions_push.c ./srcs/case_swap.c ./srcs/case_swap_utils.c ./srcs/push_swap_case.c  ./srcs/sort.c ./srcs/push_case_hundred.c ./srcs/push_swap_case_utils.c
SRC+= 
OBJ1=$(SRC:.c=.o)
OBJ=$(OBJ1:.m=.o)

$(NAME):	$(OBJ)
	@make -sC ./libft/
	@make bonus -sC ./libft/
	@cp libft/libft.a .
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\n\033[42m"****************\\nCompiled...\\n****************\\n"\033[0m\n"

run:
	@clear
	@echo "\n\033[42m"****************\\nStart push_swap...\\n****************\\n"\033[0m\n"
	@gcc -Wextra -Werror -Wall ./push_swap.c $(SRC) libft.a -o push_swap

bonus: all
		@clear
		@echo "\n\033[42m"****************\\nStart bonus...\\n****************\\n"\033[0m\n"
		@gcc -Wextra -Werror -Wall ./checker.c $(SRC) libft.a -o checker

all: $(NAME)

clean:
	@rm -f $(NAME) $(OBJ)
	@make -sC ./libft/ fclean
	@clear
	@echo "\n\033[41m"****************\\nDeleted files...\\n****************\\n"\033[0m\n"

fclean: clean
		@rm -rf libft.a
		@rm -rf push_swap
		@rm -rf checker
		@rm -rf *.t
	
re: clean all

norm:
	@norminette $(SRC)
	@norminette ./push_swap.h

.PHONY: all clean re run