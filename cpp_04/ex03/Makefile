NAME		=		interfaces
CXX			=		clang++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98
RM			=		rm -f
SRCS		=		AMateria.cpp \
					Ice.cpp \
					Cure.cpp \
					Character.cpp \
					MateriaSource.cpp \
					main.cpp
OBJS		=		$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

.cpp.o:
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean:		clean
	@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re