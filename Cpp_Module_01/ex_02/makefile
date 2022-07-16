NAME = main
SRC = main.cpp
OBJS = ${SRC:%.cpp=%.o}
CPP = c++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)
	@echo "Compiling Successfull"

%.o:%.cpp $(OBJS)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo "Object Files Removed Successfully"

fclean:clean
	@$(RM) all
	@echo "Clear"

re: fclean all