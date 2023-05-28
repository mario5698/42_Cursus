#Standard
NAME		=	libft.a
INCLUDES	=	-I ./
SRCS_DIR 	=	./
OBJS_DIR	=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra 
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

FTFILES		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint \
				ft_bzero ft_calloc ft_memchr ft_memcmp \
				ft_memmove ft_memset ft_memcpy ft_atoi ft_itoa ft_tolower ft_toupper \
				ft_split ft_strchr ft_strdup ft_strjoin \
				ft_strlcat ft_strlcpy ft_strlen ft_strncmp \
				ft_strnstr ft_strrchr ft_strtrim ft_substr \
				ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd \
				ft_putendl_fd ft_putnbr_fd 

FTBONUS		=	ft_lstnew_bonus ft_lstadd_front_bonus ft_lstsize_bonus ft_lstlast_bonus ft_lstadd_back_bonus \
				ft_lstdelone_bonus ft_lstclear_bonus ft_lstiter_bonus ft_lstmap_bonus

SRC_FILES+=$(addprefix $(SRCS_DIR),$(FTFILES))
SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

SRC_BONUS+=$(addprefix $(SRCS_DIR),$(FTBONUS))
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

clean:
	@$(RM) -rf $(OBJS_DIR)
	@$(RM) -f $(OBJSF)
	@echo "$(BLUE)libft objects files cleaned!$(DEF_COLOR)"

fclean:		clean
	@$(RM) -f $(NAME)
	@$(RM) -f .bonus
	@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:			fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for libft!$(DEF_COLOR)"

norm:
	@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

bonus:	.bonus

.bonus: $(OBJS) $(OBJS_BONUS)
			@$(AR) $(NAME) $(OBJS) $(OBJS_BONUS) 
			@printf "$(YELLOW)\rCompiling BONUS: $< $(DEF_COLOR)"
			@echo "\n$(GREEN)\rLibft bonus compiled!$(DEF_COLOR)"
			@touch .bonus

.PHONY:		all clean fclean re norm bonus
