NAME		=	bureaucrat
CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
CXXFLAGS	+=	-I $(INC_DIR)

SRC_DIR		=	src
INC_DIR		=	incl
OBJ_DIR		=	obj

SRC			=	AForm.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp \
				Bureaucrat.cpp \
				main.cpp

OBJ			=	$(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compiling $<"


clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re