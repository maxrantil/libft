NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC_PATH = ./srcs/
HEADER_PATH = ./includes/
C_FILES = $(SRC_PATH)*.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(C_FILES) -I $(HEADER_PATH)
	ar rc $(NAME) *.o 
	ranlib $(NAME)
	
clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
