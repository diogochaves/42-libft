CC		:= clang
CFLAGS	:= -Wall -Wextra -Werror
LIB		:= ar -rc
RM		:= rm -f

NAME	:= libft.a
HEADER	:= libft.h
SRCS	:= ft_isalpha.c
OBJS	:= $(SRCS:%.c=%.o)

all:	$(NAME)

$(NAME):$(OBJS) $(HEADER)
		$(LIB) $(NAME) $(OBJS)

%.o:	%.c $(HEADER)
		$(CC) $(CFLAGS) -c -o $@ $<

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
