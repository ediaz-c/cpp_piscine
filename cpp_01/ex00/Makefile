NAME		=	zombie
CXX			=	clang++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

SRC			=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@echo "Creado ejecutable" $@ "\n"

%.o: %.cpp
	@echo "Compilado $<"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re