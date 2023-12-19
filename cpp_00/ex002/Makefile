NAME		=	account
CXX			=	clang++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf
SRC			=	Account.cpp tests.cpp
OBJS		=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Ejecutable $(NAME) creado"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compilado $<"

clean:
	@$(RM) $(OBJS)
	@echo "Objetos $(OBJS) eliminados"

fclean: clean
	@$(RM) $(NAME)
	@echo "Ejecutable $(NAME) eliminado"

re: fclean all

.PHONY: all clean fclean re
