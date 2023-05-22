CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
COMPILE = ${CC} ${CFLAGS}

SRC_PF = ft_printf.c	

SRC_LFT = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstsize.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strmapi.c ft_strnstr.c ft_strrchr.c \
ft_substr.c ft_strtrim.c ft_tolower.c ft_toupper.c 

OBJET_PF =  $(SRC_PF:.c=.o)
OBJET_LFT = $(SRC_LFT:.c=.o)


all: ${NAME}
${NAME}: $(OBJET_PF) $(SRC_PF)
	ar -rcs ${NAME} ${OBJ}

%.o: %.c
	$(COMPILE) -c $< -o $@

.PHONY: clean fclean all re

clean:
	@echo Limpiando los .o ...
	@rm -f ${OBJET_PF} ${OBJET_LFT}
	@echo OK
fclean: clean 
	@echo ${NAME} borrado
	@rm -f ${NAME}
re : fclean all
