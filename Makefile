SRCS	=	ft_printf.c\

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}
		${RM} ${OBJSBON}

fclean:		clean
		${RM} ${NAME}

re:		fclean	all

.PHONY:		all clean fclean re