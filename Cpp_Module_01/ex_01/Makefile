NAME = zombie
SRC = Zombie.cpp main.cpp zombieHorde.cpp
OBJS = ${SRC:%.cpp=%.o}
CPP = c++
INC = Zombie.hpp
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)
	@echo "Compiling Successfull"

%.o:%.cpp $(INC)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo "Object Files Removed Successfully"

fclean:clean
	@$(RM) all
	@echo "Clear"

re: fclean all