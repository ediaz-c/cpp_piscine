NAME		=	bureaucrat
CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
CXXFLAGS	+=	-I $(INC_DIR)

SRC_DIR		=	src
INC_DIR		=	incl
OBJS_DIR	=	obj

SRCS		=	Bureaucrat.cpp Form.cpp main.cpp

OBJS		=	$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

all:		$(NAME)

$(NAME):	$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Compiling $@"

$(OBJS_DIR)/%.o:	$(SRC_DIR)/%.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compiling $<"

clean:
	@rm -rf $(OBJS_DIR)

fclean:		clean
	@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re