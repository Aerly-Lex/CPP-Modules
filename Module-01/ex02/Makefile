.SILENT:

NAME	= "HI_THIS_IS_BRAIN"

CXX		= c++

CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 -pedantic

SRC		=	main.cpp

OBJ		= $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	clear
	@echo "\033[32mReady to run the program \"$(NAME)\"\033[0m"

#################################################

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
