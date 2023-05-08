NAME = libftprintf.a
SRC_PF = ft_printf.c	

SRC_LFT = ft_atoi.c	ft_bzero.c	ft_calloc.c		\
	   ft_isalnum.c		ft_isalpha.c	ft_isascii.c	\
	   ft_isdigit.c		ft_isprint.c	ft_itoa.c		\
	   ft_memccpy.c		ft_memchr.c		ft_memcmp.c		\
	   ft_memcpy.c		ft_memmove.c	ft_memset.c		\
	   ft_putchar_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	\
	   ft_putstr_fd.c	ft_split.c		ft_strchr.c		\
	   ft_strdup.c		ft_strjoin.c	ft_strlcat.c	\
	   ft_strlcpy.c		ft_strlen.c		ft_strmapi.c	\
	   ft_strncmp.c		ft_strnstr.c	ft_strrchr.c	\
	   ft_strtrim.c		ft_substr.c		ft_tolower.c	\
	   ft_toupper.c

OBJET_PF =  $(SRC_PF:.c=.o)
OBJET_LFT = $(SRC_LFT:.c=.o)
LIBFT_PATH =  libft

FLAGS = -Wall -Werror -Wextra

LIB = $(addprefix $(LIBFT_PATH)/, $(OBJET_LFT))
GCC = gcc
AR = ar
ARFLAGS = rc
MAKE = make

.PHONY: clean fclean all re

all: $(NAME)

$(NAME): $(OBJET_PF) $(SRC_PF)
		@$(MAKE) -C $(LIBFT_PATH)
		@echo Compiling $(NAME)
		@$(GCC) $(FLAGS) -c $(SRC_PF)
		@$(AR) $(ARFLAGS) $(NAME) $(OBJET_PF) $(LIB)
		@ranlib $(NAME)
		@echo ======[Done]======

bonus : $(OBJET_PF) $(SRC_PF)
		@$(MAKE) -C $(LIBFT_PATH)
		@echo Compiling $(NAME)
		@$(GCC) $(FLAGS) -c $(SRC_PF)
		@$(AR) $(ARFLAGS) $(NAME) $(OBJET_PF) $(LIB)
		@ranlib $(NAME)
		@echo ======[Done]====== 

%.o : %.c
		@echo "$(NAME) >>> Add/Update $^"

clean:
		@$(MAKE) -C $(LIBFT_PATH) clean
		@echo Clean objects $(NAME)
		@rm -rf $(OBJET_PF) *.o

fclean: clean
		@$(MAKE) -C $(LIBFT_PATH) fclean
		@echo Clean $(NAME)
		@rm -rf $(NAME)
		@echo ======[Clean]======

re: fclean all