SRC = 	HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

NAME =  UnnecessaryViolence

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} : 	$(SRC) HumanA.hpp HumanB.hpp Weapon.hpp
			${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean :
		rm -rf ${NAME}

fclean : clean

re : fclean all