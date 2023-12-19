NAME		=	harl
CXX			=	clang++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

SRC			=	Harl.cpp main.cpp

OBJS		=	 $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o:%.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all