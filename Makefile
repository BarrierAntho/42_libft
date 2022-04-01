SEP_P		:=	"----------------------------------------------"
SEP_S		:=	".............................................."

NAME		:=	libft.a
CC		:=	cc
CFLAGS		:=	-Wall -Wextra -Werror
CFLAGSADD	:=	-Wconversion -g3 -fsanitize=address
DFLAGS		:=	-MMD

IPATH		:=	include
OPATH		:=	obj
DPATH		:=	dep

# SOURCES FOLDER
PRINTFPATH	:=	ft_printf
GNLPATH		:=	gnl
CHARPATH	:=	chartype
STRPATH		:=	string
PUTPATH		:=	put
MSGPATH		:=	message
CONVPATH	:=	convert

RM		:=	rm -rf

#TIPS: List in the correct form 'ls -1 <directory> | sed's/$/\\/g' 
INCLUDES	:=	ft_chartype.h\
			ft_color.h\
			ft_libft.h\
			ft_message.h\
			ft_printf.h\
			ft_put.h\
			ft_string.h

PRINTF_SRCS	:=	ft_printf_arg.c\
			ft_printf.c\
			ft_printf_putc.c\
			ft_printf_puts.c

CHAR_SRCS	:=	ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isblank.c\
				ft_isdigit.c\
				ft_islower.c\
				ft_ispolarity.c\
				ft_isprint.c\
				ft_ispunct.c\
				ft_isspace.c\
				ft_isupper.c

STR_SRCS	:=	ft_index.c\
			ft_rindex.c\
			ft_strchr.c\
			ft_strcpy.c\
			ft_strlen.c\
			ft_strrchr.c\
			ft_strtrim.c

PUT_SRCS	:=	ft_putchar_fd.c\
			ft_putstr_fd.c

MSG_SRCS	:=	ft_error.c\
			ft_warning.c

CONV_SRCS	:=	ft_atoi.c\
			ft_atol.c\
			ft_atoll.c

OBJS		=	${addprefix ${OPATH}/, ${PRINTF_SRCS:.c=.o}}\
			${addprefix ${OPATH}/, ${CHAR_SRCS:.c=.o}}\
			${addprefix ${OPATH}/, ${STR_SRCS:.c=.o}}\
			${addprefix ${OPATH}/, ${PUT_SRCS:.c=.o}}\
			${addprefix ${OPATH}/, ${MSG_SRCS:.c=.o}}\
			${addprefix ${OPATH}/, ${CONV_SRCS:.c=.o}}

#DEPS		=	${addprefix ${DPATH}/, ${PRINTF_SRCS:.c=.d}}\
			${addprefix ${DPATH}/, ${CHAR_SRCS:.c=.d}}\
			${addprefix ${DPATH}/, ${STR_SRCS:.c=.d}}\
			${addprefix ${DPATH}/, ${PUT_SRCS:.c=.d}}\
			${addprefix ${DPATH}/, ${MSG_SRCS:.c=.d}}\
			${addprefix ${DPATH}/, ${CONV_SRCS:.c=.d}}

vpath %.h ${IPATH}
vpath %.c ${PRINTFPATH}\
	${CHARPATH}\
	${STRPATH}\
	${PUTPATH}\
	${MSGPATH}\
	${CONVPATH}
vpath %.o ${OPATH}
#vpath %.d ${DPATH}

all:			${NAME}

${OPATH}/%.o:			%.c ${INCLUDES}
			${CC} ${CFLAGS} ${CFLAGSADD} -I ${IPATH} -c $< -o $@

#${DPATH}/%.d:			%.c ${INCLUDES}
#			${CC} ${CFLAGS} ${CFLAGSADD} -I ${IPATH} -c $< ${DFLAGS} -o $@

${NAME}:		${OBJS} ${DEPS}
			ar rc ${NAME} ${OBJS}

${OBJS}:		| ${OPATH}

${OPATH}:
			mkdir -p ${OPATH}

#${DEPS}:		| ${DPATH}

#${DPATH}:
#			mkdir -p ${DPATH}

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
			@echo ${SEP_P}
			norminette ${CONVPATH}

.PHONY:			all clean fclean re norme
