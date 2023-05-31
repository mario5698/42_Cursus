#------------Standard----------
NAME		=	libftprintf.a
INCLUDES	=	include
SRCS_DIR 	=	./
OBJS_DIR	=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -MMD -I
RM			=	rm -rf
AR			=	ar rcs
LIBFT		=	libft/ 

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
PRFILES		=	ft_printf ft_printf_tools ft_printfid ft_printfp ft_printfu ft_printfs ft_printfxX


SRC_FILES+=$(PRFILES)

SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))
DEPENDS		=   $(addprefix $(OBJS_DIR), $(addsuffix .d, $(OBJS)))
OBJSF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJS)
			@make -C $(LIBFT)
			@cp libft/libft.a ./
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJS)
			@echo "\n$(GREEN)LibftPrintf compiled!$(DEF_COLOR)"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c Makefile ft_printf.h | $(OBJSF)
	@printf "$(YELLOW)\rCompiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
	@mkdir -p $(OBJS_DIR)

clean:
	@$(RM) $(OBJ_DIR)
	@make clean -C $(LIBFT)
	@$(RM) $(OBJS_DIR)
	@$(RM) $(OBJSF)
	@echo "$(BLUE)libft objects files cleaned!$(DEF_COLOR)"

f: fclean

fclean:		clean
	@$(RM) $(NAME)
	@make fclean -C $(LIBFT)

	@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:			fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for libft!$(DEF_COLOR)"

norm:
	@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm

-include $(DEPENDS)
