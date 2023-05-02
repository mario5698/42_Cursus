#------------Standard----------
NAME		=	libftprintf.a
INCLUDES	=	include/
SRCS_DIR 	=	src/
OBJS_DIR	=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

#------------Colors------------
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m
#------------Prefix------------ 
SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))
OBJSF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@make -C $(LIBFT)
			@ranlib $(NAME)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@echo "\n$(GREEN)LibftPrintf compiled!$(DEF_COLOR)"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c | $(OBJSF)
	@printf "$(YELLOW)\rCompiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@$(RM) -rf $(OBJ_DIR)
	@make clean -C $(LIBFT)
	@$(RM) -rf $(OBJS_DIR)
	@$(RM) -f $(OBJSF)
	@echo "$(BLUE)libft objects files cleaned!$(DEF_COLOR)"

fclean:		clean
	@$(RM) -f $(NAME)
	@$(RM) -f $(LIBFT)/libft.a
	@$(RM) -f $(NAME)
	@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:			fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for libft!$(DEF_COLOR)"

norm:
	@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm
