NAME	=	libft.a
# Name des kompilierten Programms
SRCS	=	ft_memset.c  \
  ft_bzero.c  \
  ft_memcpy.c  \
  ft_memmove.c  \
  ft_memchr.c  \
  ft_memcmp.c  \
  ft_isalpha.c \
  ft_isascii.c \
  ft_isdigit.c \
  ft_isalnum.c \
  ft_isprint.c \
  ft_tolower.c \
  ft_toupper.c \
  ft_strchr.c  \
  ft_atoi.c  \
  ft_strlen.c  \
  ft_strlcat.c \
  ft_strlcpy.c \
  ft_strncmp.c \
  ft_strnstr.c \
  ft_strrchr.c \
  ft_memcmp.c \
#SRCS_BONUS = ft_lstadd_front.c ft_lstnew.c ft_lstsize.c
OBJS	=	${SRCS:.c=.o}
#OBJS_BONUS = $(SRCS_BONUS:.c=.o)
# Damit nur veränderte .c-Dateien in .o-Dateien kompiliert werden
RM		=	rm -f
# -f (force) macht fclean jederzeit ausführbar (auch ohne .o-Dateien)
CC		=	cc
# Kompiliersprache
CFLAGS	=	-Wall -Wextra -Werror

all:		${NAME}
# Die verwendeten Flags
${NAME}:	${OBJS}
			ar rcs $(NAME) $(OBJS)

#bonus: 		$(OBJS_BONUS)
#ar rcs ${NAME} ${OBJS_BONUS}
clean:
			${RM} ${OBJS}
# Löscht die .o-Dateien
fclean:		clean
			${RM} ${NAME}
# Löscht die .o- und exe-Dateien
re:			fclean all
# Löscht und rekompiliert
.PHONY:		all clean fclean re
# Führt die Befehle aus, auch wenn eine gleichnamige Datei existiert
