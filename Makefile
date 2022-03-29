SEP_P		:=	"----------------------------------------------"
SEP_S		:=	".............................................."

NAME		:=	libft.a
CC		:=	cc
CFLAGS		:=	-Wall -Wextra -Werror
CFLAGSADD	:=	-Wconversion -g3 -fsanitize=address
DFLAGS		:=	-MMD

IPATH		:=	include
OPATH		:=	obj
DEPAPTH		:=	dep

# SOURCES FOLDER
PRINTFPATH	:=	ft_printf
GNLPATH		:=	gnl
CHARPATH	:=	chartype
STRPATH		:=	string
PUTPATH		:=	put
MSGPATH		:=	message

RM		:=	rm -rf

HEADERS		:=	$(wildcard ${IPATH}/*.h)
PRINTF_SRCS	:=	$(wildcard ${PRINTFPATH}/*.c)
CHAR_SRCS	:=	$(wildcard ${CHARPATH}/*.c)
STR_SRCS	:=	$(wildcard ${STRPATH}/*.c)
PUT_SRCS	:=	$(wildcard ${PUTPATH}/*.c)
MSG_SRCS	:=	$(wildcard ${MSGPATH}/*.c)

OBJS		=	${PRINTF_SRCS:.c=.o}\
			${CHAR_SRCS:.c=.o}\
			${STR_SRCS:.c=.o}\
			${PUT_SRCS:.c=.o}\
			${MSG_SRCS:.c=.o}

all:			${NAME}

%.o:			%.c ${HEADERS}
			${CC} ${CFLAGS} ${CFLAGSADD} -I ${IPATH} -c $< -o $@

${NAME}:		${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:			clean
			${RM} ${NAME}

re:			fclean all

norme:
			@echo ${SEP_P}
			norminette ${IPATH}
			@echo ${SEP_P}
			norminette ${PRINTFPATH}
			@echo ${SEP_P}
			norminette ${CHARPATH}
			@echo ${SEP_P}
			norminette ${STRPATH}
			@echo ${SEP_P}
			norminette ${PUTPATH}
			@echo ${SEP_P}
			norminette ${MSGPATH}

.PHONY:			all clean fclean re norme
