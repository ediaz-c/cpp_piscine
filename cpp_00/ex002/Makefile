NAME		=		account
CXX			=		clang++
CXXFLAGS	=		-Wall -Werror -Wextra -std=c++98
RM			=		rm -rf
SRC			=		Account.cpp tests.cpp
OBJS		=		$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Ejecutable "$(NAME)" creado"

$(OBJS):	$(SRC)
	@$(CXX) $(CXXFLAGS) -c $(SRC) -o $(OBJS)
	@echo "Compilado "$<

clean:
	@$(RM) $(OBJS)
	@echo "Objeto " $(OBJS) " eliminado"

fclean:	clean
	@$(RM) $(NAME)
	@echo "Ejecutable "$(NAME)" eliminado"

re:	fclean all

.PHONY: all clean fclean re