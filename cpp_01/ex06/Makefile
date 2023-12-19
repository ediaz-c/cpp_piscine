NAME			=	harlFilter
CXX				=	clang++
CXXFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRC				=	main.cpp Harl.cpp

OBJS			=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean re