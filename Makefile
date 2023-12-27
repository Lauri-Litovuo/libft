NAME = libft.a

all: $(NAME)

SOURCES = ft_isascii.c \
			ft_memcpy.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_atoi.c \
			ft_isdigit.c \
			ft_memmove.c \
			ft_putstr_fd.c \
			ft_strncmp.c \
			ft_toupper.c \
			ft_bzero.c \
			ft_isprint.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strnstr.c \
			ft_isalnum.c \
			ft_memchr.c \
			ft_putchar_fd.c \
			ft_strlcat.c \
			ft_strrchr.c \
			ft_isalpha.c \
			ft_memcmp.c \
			ft_putendl_fd.c \
			ft_strlcpy.c \
			ft_putnbr_fd.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_itoa.c	\
			ft_split.c	\
			ft_lstadd_front.c \
			ft_lstnew.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \




OBJECTS = $(SOURCES:.c=.o)

HEADERS = libft.h

CC: cc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS)
	@ar -rsc $(NAME) $(OBJECTS)
	@echo "libft making in progress..."

clean:
	@rm -f $(OBJECTS)
	@echo "removing .o files"

fclean: clean
	@rm -f $(NAME)
	@echo "removing libft.a"

re: fclean all

.PHONY: all clean fclean re
