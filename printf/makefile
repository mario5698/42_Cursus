NAME = libftprintf.a
OBJECTS = srcs/test.o
CFLAGS = -Wall -Werror -Wextra

all: make_libs ${NAME}

make_libs: 
	MAKE -C libft

${NAME}: ${OBJECTS}
	cp libft/libft.a ${NAME}
	ar rc ${NAME} ${OBJECTS}

%.o : %.c
	gcc  -c ${CFLAGS} $< -o $@
#printf("${no_c}\r Compailing $@")

fclean: clean
	rm -f ${NAME}
	rm main_test
	MAKE -C libft fclean

clean:
	rm -f ${OBJECTS}
	MAKE -C libft clean

re: fclean all%
