NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = ft_putchar_fd.c \
	  ft_calloc.c \
	  ft_memset.c\
	  ft_bzero.c \
	  ft_strjoin.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_putstr_fd.c \
	  ft_strlen.c \
	  ft_calloc.c \
	  ft_split.c \
	  ft_memcpy.c \
	  ft_strchr.c \
	  ft_strncmp.c \
	  ft_memmove.c \
	  ft_strdup.c \
	  ft_isdigit.c \

OBJ = $(SRC:.c = .o)

all: $(NAME)

$(NAME):
	cc $(FLAG) -c $(SRC)
	ar rcs $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
