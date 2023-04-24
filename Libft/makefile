NAME = libft.a
OBJECTS = srcs/ft_atoi.o srcs/ft_isalnum.o srcs/ft_isalpha.o \
srcs/ft_isascii.o srcs/ft_isdigit.o srcs/ft_isprint.o \
srcs/ft_strcat.o srcs/ft_strcpy.o srcs/ft_strlen.o \
srcs/ft_strncmp.o srcs/ft_strnstr.o srcs/ft_tolower.o \
srcs/ft_toupper.o srcs/test.o srcs/ft_strlen.o srcs/test_check.o \
srcs/test_is.o srcs/test_str.o srcs/ft_strchr.o srcs/ft_strrchr.o \
srcs/ft_strdup.o srcs/ft_memcpy.o srcs/test_mem.o srcs/ft_memset.o \
srcs/ft_memchr.o srcs/ft_memcmp.o srcs/ft_calloc.o srcs/ft_memmove.o
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