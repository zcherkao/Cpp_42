SRC = main.cpp

NAME =  Whatever

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} : 	$(SRC) main.cpp
			${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean :
		rm -rf ${NAME}

fclean : clean

re : fclean all