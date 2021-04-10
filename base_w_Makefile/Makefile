
NAME		= b_w_m

SRC_DIR		= ./srcs/

SRC			= hello.c

SRCS		= ${addprefix ${SRC_DIR}, ${SRC}}

OBJ_DIR		= ./obj/

HDR_DIR		= ./includes/

LIB			= libh.a

RM			= rm -f

#on va remplacer les % par SRCS, avec initialement des .c qu'on transforme en .o
# Si on les gardait dans le meme directory, simplement : ${SRCS:.c=.o}
OBJS		= ${patsubst ${SRC_DIR}%.c, ${OBJ_DIR}%.o, ${SRCS}}

#si j'avais voulu garder le .o dans le meme directory j'aurais mis :
# gcc -I ${HDR_DIR} -c $< -o ${<:.c=.o}
#Pour du ASSEMBLEUR : 
# 	nasm -f macho64 $< -o $@
${OBJ_DIR}%.o	: ${SRC_DIR}%.c
	gcc -c -I ${HDR_DIR} -c -o $@ $<

${NAME}:	${OBJS}
		ar rc ${LIB} ${OBJS}
		gcc -o ${NAME} main.c -I includes ${LIB}

all:		${NAME}

clean:
			${RM} ${OBJS}
			${RM} ${NAME}

fclean:		clean
			${RM} ${LIB}

re:		fclean ${NAME}

iPHONY:	all clean fclean re libft.a
