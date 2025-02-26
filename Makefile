NAME	= push_swap
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
SRCS	=   free_nd_errors_funcs.c \
		   	 checking_arguments.c   \
		   	  operations_funcs.c   	 \
		   	   push_swap_main.c       \
		   	    utils_funcs2.c         \
		   		 utils_func.c 	        \
				  sortings.c	         \

				  
all : $(NAME)

$(NAME) :
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo OK

re: fclean all

clean:
	@rm -rf $(NAME)

fclean:	clean

.PHONY:all $(NAME) re clean fclean norm