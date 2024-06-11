NAME	= megaphone

CXX		=	c++

FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.cpp=.o)

.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@


$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)
	clear
	@echo "\033[32mReady to run the program \"$(NAME)\"\033[0m"

################################################

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
