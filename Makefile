
NAME = libft.a

HEADER = libft.h

LIST =		ft_memset.c		ft_strrchr.c	ft_substr.c\
			ft_bzero.c		ft_strnstr.c	ft_strjoin.c\
			ft_memcpy.c		ft_strncmp.c	ft_strtrim.c\
			ft_memccpy.c	ft_atoi.c		ft_split.c\
			ft_memmove.c	ft_isalpha.c	ft_itoa.c\
			ft_memchr.c		ft_isdigit.c	ft_strmapi.c\
			ft_memcmp.c		ft_isalnum.c	ft_putchar_fd.c\
			ft_strlen.c		ft_isascii.c	ft_putstr_fd.c\
			ft_strlcpy.c	ft_isprint.c	ft_putendl_fd.c\
			ft_strlcat.c	ft_toupper.c	ft_putnbr_fd.c\
			ft_strchr.c 	ft_tolower.c	ft_calloc.c\
			ft_strdup.c\

LIST_B =	ft_lstnew.c		ft_lstadd_front.c\
			ft_lstsize.c	ft_lstlast.c\
			ft_lstadd_back.c	ft_lstdelone.c\
			ft_lstclear.c	ft_lstiter.c\
			ft_lstmap.c\

OBJ = ${LIST:.c=.o}
OBJ_B = ${LIST_B:.c=.o}

OPTFLAGS = -O2
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ) $? 

%.o : %.c
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@

bonus : $(OBJ) $(OBJ_B)
	ar rcs $(NAME) $(OBJ) $(OBJ_B) $?

clean :
	$(RM) $(OBJ) $(OBJ_B)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus