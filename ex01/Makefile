NAME = Animal

SRC = Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp\
	

CXX = c++ -g 
RM = rm -rf
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
AR = ar rcs

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
			@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) 
			
clean:
		@$(RM) $(OBJ)
		
fclean: clean
		@$(RM) $(NAME)
		
re: fclean all