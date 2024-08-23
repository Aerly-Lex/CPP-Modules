.SILENT:

NAME	= mutantStack

CXX		= c++

CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 -pedantic -I include

SRC		=	main.cpp

OBJ_DIR	= obj/

OBJ		= $(SRC:.cpp=.o)

OBJ_PREF= $(addprefix $(OBJ_DIR),$(OBJ))

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ_PREF)
	$(CXX) $(CXXFLAGS) $(OBJ_PREF) -o $(NAME)
	clear
	@echo "\033[32mReady to run the program \"$(NAME)\"\033[0m"

#################################################

all:	$(NAME)

clean:
	rm -f $(OBJ_PREF)
	@if [ -d $(OBJ_DIR) ]; then rmdir $(OBJ_DIR); fi

fclean:	clean
	rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re