NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADER_PATH = libft.h
C_FILES = *.c

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
