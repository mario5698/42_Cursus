NAME = libftprintf.a
OBJECTS = 
CFLAGS = -Wall -Werror -Wextra

all: make_libs ${NAME}

make_libs: 
	MAKE -C libft


${NAME}: ${OBJECTS}
	cp libft/libft.a ${NAME}
	ar rc ${NAME}  ${OBJECTS}

%.o : %.c
	gcc  -c ${CFLAGS} $< -o $@

fclean: clean
	rm -f ${NAME}
	MAKE -C libft fclean

clean:
	rm -f ${OBJECTS}
	MAKE -C libft clean

re: fclean all%