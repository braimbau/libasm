NAME        =    libasm.a

SRC			=	./srcs/ft_strlen.s	\
				./srcs/ft_read.s		\
				./srcs/ft_write.s	\
				./srcs/ft_strcmp.s	\
				./srcs/ft_strdup.s	\
				./srcs/ft_strcpy.s

NA			=	nasm
NA_FLAGS	=	-f elf64 -I./include

OBJS		=	$(SRC:.s=.o)

all:	$(NAME)

%.o:	%.s
		${NA} ${NA_FLAGS} -o $@ -s $<

${NAME}:		${OBJS}
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}

clean:    
	${RM}	${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:    all clean fclean re
