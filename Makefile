CC 		=	cc
CFLAGS	=	-Wall -Wextra -Werror
NAME	= 	libftprintf.a
INC		=	inc/ft_printh.h
SRC		=	src/ft_printf.c	\
			src/print_format.c \
			src/print_char.c \
			src/print_str.c \
			src/print_di.c \
			src/print_ux.c \
			src/print_ptr.c

OBJ		=	$(SRC:%.c=%.o)
RM		=	rm -f
AR		=	ar rcs

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	$(AR) $@ $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re