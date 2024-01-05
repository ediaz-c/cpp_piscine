NAME		=	animal
CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

SRCS		=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				Brain.cpp
OBJS_DIR	=	objects/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

all:			$(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(NAME):		$(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

objects/%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compilado $<"

clean:
	@$(RM) $(OBJS_DIR)
	@echo "Archivos .o eliminados"

fclean:		clean
	@$(RM) $(NAME)
	@echo "Ejecutable $(NAME) eliminado"

re:			fclean all

.PHONY:		all clean fclean re