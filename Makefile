# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klever <klever@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 15:07:20 by kbarahon          #+#    #+#              #
#    Updated: 2021/09/25 00:45:15 by klever           ###   ########.fr        #
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

##TEST_ERROR#
run_error:
	@./push_swap klever 8
	@./push_swap --7 9 10
	@./push_swap "7 9 1 7 10" 
	@./push_swap 7 9 10 2147483648
	@./push_swap -2147483649 7 9 10
	@echo
	@./push_swap
	@echo
	@echo "\033[43m"****************\Finish Test_Error..**********"\033[0m\n"

run_ident:
	@./push_swap 42
	@./push_swap 0 1 2 3
	@./push_swap "0 1 2 3 4 5 7 8 9"
	@./push_swap -2147483648 -10 -9 -8 -7 -1 0
	@echo "\033[44m"****************\Finish Test_Ident..**********"\033[0m\n"

#ARGS_TES#
#ARG="2 1 0"; ./push_swap $ARG | ./checker_Mac $ARG
ARG="2 1 0"
run_simple:
	@./push_swap $(ARG) | ./checker_Mac $(ARG)
	@./push_swap $(ARG) | wc -l
	@./push_swap $(ARG) | ./checker $(ARG)
	@./push_swap $(ARG) | wc -l
	@echo "\033[45m"****************\Finish Test_simple..**********"\033[0m\n"

#ARG="1 5 2 4 3"; ./push_swap $ARG | ./checker_Mac $ARG
ARG2="1 5 2 4 3"
run_simple2:
	@./push_swap $(ARG2) | ./checker_Mac $(ARG2)
	@./push_swap $(ARG2) | wc -l
	@./push_swap $(ARG2) | ./checker $(ARG2)
	@./push_swap $(ARG2) | wc -l
	@echo "\033[45m"****************\Finish Test_simple2..**********"\033[0m\n"

#ARG=$(seq -1000 1000 | sort -R | tail -n 5 | tr '\n' ' ') ; ./push_swap $ARG | ./checker_Mac $ARG
ARG3 = $(shell seq -1000 1000 | sort -R | tail -n 5 | tr '\n' ' ' > data);
AUX = $(shell cat data)

run_simple3:
	@echo $(ARG3)
	@echo $(AUX)
	@./push_swap $(AUX) | ./checker_Mac $(AUX)
	@./push_swap $(AUX) | wc -l
	@./push_swap $(AUX) | ./checker $(AUX)
	@./push_swap $(AUX) | wc -l
	@wc -w data
	@echo "\033[45m"****************\Finish Test_simple3..**********"\033[0m\n"
#ARG=$(seq -1000 1000 | sort -R | tail -n 100 | tr '\n' ' ') ; ./push_swap $ARG | ./checker_Mac $ARG
ARG4 = $(shell seq -1000 1000 | sort -R | tail -n 100 | tr '\n' ' ' > data);
AUX = $(shell cat data)

run_med:
	@echo $(ARG4)
	@echo $(AUX)
	@./push_swap $(AUX) | ./checker_Mac $(AUX)
	@./push_swap $(AUX) | wc -l
	@./push_swap $(AUX) | ./checker $(AUX)
	@./push_swap $(AUX) | wc -l
	@wc -w data
	@echo "\033[46m"****************\Finish Test_med..**********"\033[0m\n"
#ARG=$(seq -1000 1000 | sort -R | tail -n 500 | tr '\n' ' ') ; ./push_swap $ARG | ./checker_Mac $ARG
ARG5 = $(shell seq -1000 1000 | sort -R | tail -n 500 | tr '\n' ' ' > data);
AUX = $(shell cat data)

run_avans:
	@echo $(ARG5)
	@echo $(AUX)
	@./push_swap $(AUX) | ./checker_Mac $(AUX)
	@./push_swap $(AUX) | wc -l
	@./push_swap $(AUX) | ./checker $(AUX)
	@./push_swap $(AUX) | wc -l
	@wc -w data
	@echo "\033[47m"****************\Finish Test_avans..**********"\033[0m\n"
##Test_Bonus##
#CRT+D#
run_bonus_error:
	@./checker 2 -3 "4" l
	@./checker 2 3 4 2
	@./checker 7 9 10 2147483648
	@./checker -2147483649 7 9 10
	@echo
	@./checker
	@echo
	@echo "sa" | ./checker 2 1
	@echo "sd" | ./checker 2 1
	@echo "   sa" | ./checker 2 1
	@echo "\033[40m"****************\Finish Test_Bonus_error..**********"\033[0m\n"

run_bonus_false:
	@./push_swap 0 9 1 8 2 7 3 6 > data
	@cat data | ./checker 0 9 1 8 2 7 3 6 4 5
	@./push_swap 0 9 1 8 2 7 3 6 4 > data
	@cat data | ./checker 0 9 1 8 2 7 3 6 4 5
	@echo "sb" | ./checker 2 1
	@echo "\033[40m"****************\Finish Test_Bonus_False..**********"\033[0m\n"

run_bonus_true:
	@./push_swap 0 9 1 8 2 7 3 6 4 5 > data
	@cat data | ./checker 0 9 1 8 2 7 3 6 4 5
	@./push_swap 0 9 1 8 2 7 3 6 4 > data
	@cat data | ./checker 0 9 1 8 2 7 3 6 4
	@./push_swap 2 1 > data
	@cat data | ./checker 2 1
	@echo "\033[40m"****************\Finish Test_Bonus_True..**********"\033[0m\n"

##Final_tests##
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
		@rm -rf data
	
re: clean all

norm:
	@norminette $(SRC)
	@norminette ./push_swap.h

.PHONY: all clean re run