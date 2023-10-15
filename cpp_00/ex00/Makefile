NAME		=	megaphone
CC			=	clang++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -rf

SRC			=	megaphone.cpp

OBJS		=	megaphone.o

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS):	$(SRC)
	@$(CC) $(CFLAGS) -c $(SRC) -o $(OBJS)
	@echo "Compilado "$<

clean:
	@$(RM) $(OBJS)
	@echo "Objeto " $(OBJS) " eliminado"

fclean:	clean
	@$(RM) $(NAME)
	@echo "Ejecutable "$(NAME)" eliminado"

re:	fclean all

.PHONY: all clean fclean re