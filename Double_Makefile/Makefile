SRC_CK_DIR			= srcs_ck/

SRC_PS_DIR			= srcs_ps/

SRC_CK				= ck.c execute_instructions.c initialize.c instructions_1.c\
						instructions_2.c parser_arguments.c parser_instructions.c

SRCS_CK				= ${addprefix ${SRC_CK_DIR}, ${SRC_CK}}

SRC_PS				= ps.c move.c check_ps.c

SRCS_PS				= ${addprefix ${SRC_PS_DIR}, ${SRC_PS}}

OBJ_CK_DIR			= obj_ck/

OBJ_PS_DIR			= obj_ps/

HDR_DIR				= includes/

LIB					= libft.a

RM					= rm -f

OBJS_CK				= ${patsubst ${SRC_CK_DIR}%.c, ${OBJ_CK_DIR}%.o, ${SRCS_CK}}

OBJS_PS				= ${patsubst ${SRC_PS_DIR}%.c, ${OBJ_PS_DIR}%.o, ${SRCS_PS}}


${OBJ_CK_DIR}%.o	: ${SRCS_CK_DIR}%.s
	gcc -I includes -c $< -o $@

${OBJ_PS_DIR}%.o	: ${SRC_PS_DIR}%.s
	gcc -I includes -c $< -o $@

all:		
	cd libft && make && cd ..
	gcc -o checker ${SRCS_CK}  -I includes -Llibs -lft
	gcc -o push_swap ${SRCS_PS}  -I includes -Llibs -lft

oho:
	echo ${SRCS_CK}

clean:
	${RM} ${OBJS_CK}
	${RM} ${OBJS_PS}
#	cd libft && make clean && cd ..
	${RM} .DS_Store
	${RM} push_swap
	${RM} checker

fclean:		clean
	cd libft && make fclean && cd ..
	${RM} ${LIB}

re:		fclean ${NAME}

.PHONY:	all clean fclean re 
