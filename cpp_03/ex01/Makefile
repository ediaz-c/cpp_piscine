NAME		=	scavtrap
CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f
SRCS		=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp
OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compilado $<"

clean:
	@$(RM) $(OBJS)
	@echo "Archivos .o eliminados"

fclean:		clean
	@$(RM) $(NAME)
	@echo "Ejecutable $(NAME) eliminado"

re:			fclean all

.PHONY:		all clean fclean re