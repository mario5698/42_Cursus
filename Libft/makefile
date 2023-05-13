#Standard
NAME		=	libft.a
INCLUDES	=	./
SRCS_DIR 	=	src/
OBJS_DIR	=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

#Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#Sources
FTIS_DIR	=	ft_is/
FTIS		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FTMEM_DIR	=	ft_mem/
FTMEM		=	ft_bzero ft_calloc ft_memchr ft_memcmp \
				ft_memmove ft_memset ft_memcpy

FTTO_DIR	=	ft_to/
FTTO		=	ft_atoi ft_itoa ft_tolower ft_toupper

FTSTR_DIR	=	ft_str/
FTSTR		=	ft_split ft_strchr ft_strdup ft_strjoin \
				ft_strlcat ft_strlcpy ft_strlen ft_strncmp \
				ft_strnstr ft_strrchr ft_strtrim ft_substr \
				ft_strmapi ft_striteri

FTPUT_DIR	=	ft_put/
FTPUT		=	ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd 

FTLST_DIR	=	ft_lst/
FTLST		=	ft_lstnew ft_lstadd_front
#ft_lstadd_back ft_lstclear ft_lstdelone ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

SRC_FILES+=$(addprefix $(FTIS_DIR),$(FTIS))
SRC_FILES+=$(addprefix $(FTMEM_DIR),$(FTMEM))
SRC_FILES+=$(addprefix $(FTTO_DIR),$(FTTO))
SRC_FILES+=$(addprefix $(FTSTR_DIR),$(FTSTR))
SRC_FILES+=$(addprefix $(FTPUT_DIR),$(FTPUT))
SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

SRC_BONUS+=$(addprefix $(FTLST_DIR),$(FTLST))
SRCS_BONUS	= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_BONUS)))
OBJS_BONUS	= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_BONUS)))
#####################################################################
OBJSF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@echo "\n$(GREEN)Libft compiled!$(DEF_COLOR)"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c | $(OBJSF)
	@printf "$(YELLOW)\rCompiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR)$(FTIS_DIR)
	@mkdir -p $(OBJS_DIR)$(FTMEM_DIR)
	@mkdir -p $(OBJS_DIR)$(FTTO_DIR)
	@mkdir -p $(OBJS_DIR)$(FTSTR_DIR)
	@mkdir -p $(OBJS_DIR)$(FTTEST_DIR)
	@mkdir -p $(OBJS_DIR)$(FTPUT_DIR)
	@mkdir -p $(OBJS_DIR)$(FTLST_DIR)

clean:
	@$(RM) -rf $(OBJS_DIR)
	@$(RM) -f $(OBJSF)
	@echo "$(BLUE)libft objects files cleaned!$(DEF_COLOR)"

fclean:		clean
	@$(RM) -f $(NAME)
	@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:			fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for libft!$(DEF_COLOR)"

norm:
	@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

bonus:			$(OBJS_BONUS)
			@$(AR) $(NAME) $(OBJS_BONUS) 
			@printf "$(YELLOW)\rCompiling BONUS: $< $(DEF_COLOR)"
			@echo "\n$(GREEN)\rLibft bonus compiled!$(DEF_COLOR)"

.PHONY:		all clean fclean re norm
