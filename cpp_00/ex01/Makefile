NAME		=	phonebook
CC			=	clang++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -rf

SRC			=	Contact.cpp PhoneBook.cpp main.cpp

OBJS		=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compilado "$<

clean:
	@$(RM) $(OBJS)
	@echo "Objeto " $(OBJS) " eliminado"

fclean:	clean
	@$(RM) $(NAME)
	@echo "Ejecutable "$(NAME)" eliminado"

re:	fclean all

.PHONY: all clean fclean re