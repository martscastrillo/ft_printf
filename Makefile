NAME	=	libftprintf.a
CC		=	gcc
CFLAGS	=	-c -Wall -Werror -Wextra
RM		=	rm -f
SRCS	=	ft_printf.c ft_prints.c ft_put.c ft_strlen.c

OBJS		=	$(SRCS:.c=.o)


LIB		=	ar rcs
INCLUDE	=	ft_printf.h

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
	@$(LIB) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS_BONUS) $(OBJS)

fclean:		clean
	@$(RM) $(NAME)

re:			fclean all


.PHONY: all clean fclean re