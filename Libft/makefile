NAME = libft.a
OBJECTS = srcs/ft_atoi.o srcs/ft_isalnum.o srcs/ft_isalpha.o srcs/ft_isascii.o\
srcs/ft_isdigit.o srcs/ft_isprint.o srcs/ft_strcat.o srcs/ft_strcpy.o srcs/ft_strlen.o \
srcs/ft_strncmp.o srcs/ft_strnstr.o srcs/ft_tolower.o srcs/ft_toupper.o srcs/test.o \
srcs/ft_strlen.o srcs/test_check.o srcs/test_is.o srcs/test_str.o
CFLAGS = -Wall -Werror -Wextra

${NAME}: ${OBJECTS}
	ar rc ${NAME}  ${OBJECTS}

all: ${NAME}

%.o : %.c
	gcc  -c ${CFLAGS} $< -o $@

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJECTS}

re: fclean all%