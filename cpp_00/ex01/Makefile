NAME		=		phonebook
CXX			=		clang++
CXXFLAGS	=		-Wall -Werror -Wextra -std=c++98

RM			=		rm -rf
SRC			=		Contact.cpp PhoneBook.cpp main.cpp
OBJS		=		$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Ejecutable "$(NAME)" creado"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compilado "$<

clean:
	@$(RM) $(OBJS)
	@echo "Objeto " $(OBJS) " eliminado"

fclean:	clean
	@$(RM) $(NAME)
	@echo "Ejecutable "$(NAME)" eliminado"

re:	fclean all