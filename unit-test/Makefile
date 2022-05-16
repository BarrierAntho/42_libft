# libft settings
FTPATH		:=	../libft
IFT		:=	include
FTHEADER	:=	ft_libft.h
FTNAME		:=	libft.a
FT		:=	ft

# Standard settings
SEP_P		:=	"----------------------------------------------"
SEP_S		:=	".............................................."
EXEC		:=	unit_test_libft
CC		:=	cc
CFLAGS		:=	-Wall -Wextra -Werror
#CFLAGS		:=	-Wall -Wextra
CFLAGSADD	:=	-Wconversion -g3 -fsanitize=address

IPATH		:=	.

RM		:=	rm -rf

INCLUDES	:=	main.h

SRCS		:=	main.c\
			chartype_is.c\
			memory.c

OBJS		=	${SRCS:.c=.o}

all:			${EXEC}

%.o:			%.c ${INCLUDES} ${FTPATH}/${IFT}/${FTHEADER}
			${CC} ${CFLAGS} ${CFLAGSADD} -I ${IPATH} -I ${FTPATH}/${IFT}} -c $< -o $@

${EXEC}:		${OBJS}
			make -C ${FTPATH}
			${CC} ${CFLAGS} ${CFLAGSADD} ${OBJS} -I ${IPATH} -I ${FTPATH}/${IFT} -L${FTPATH} -l${FT} -o ${EXEC}

clean:
			make clean -C ${FTPATH}
			${RM} ${OBJS}

fclean:
			make fclean -C ${FTPATH}
			make clean
			${RM} ${EXEC}

re:
			make re -C ${FTPATH}
			make fclean all

test_ori:
			./${EXEC} 0

test_mft:
			./${EXEC} 1


.PHONY:			all clean fclean re test
