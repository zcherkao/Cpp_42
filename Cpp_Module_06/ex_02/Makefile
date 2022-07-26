SRC = main.cpp A.cpp Base.cpp B.cpp C.cpp

NAME =  Base

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} : 	$(SRC) main.cpp A.cpp Base.cpp B.cpp C.cpp
			${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean :
		rm -rf ${NAME}

fclean : clean

re : fclean all