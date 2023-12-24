NAME		=		fixed
CXX			=		clang++
CXXFLAGS	=		-Wall -Werror -Wextra -std=c++98

RM			=		rm -rf

SRC			=		main.cpp Fixed.cpp

OBJ			=		$(SRC:.cpp=.o)
all:	$(NAME)

$(NAME):	$(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compilado $<"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re