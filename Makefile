NAME = libft.a

all: $(NAME)

SOURCES = $(addprefix ./libc/, \
				ft_isascii.c ft_memcpy.c ft_strlen.c ft_tolower.c \
				ft_atoi.c ft_isdigit.c ft_memmove.c ft_putstr_fd.c ft_strncmp.c ft_toupper.c \
				ft_bzero.c ft_isprint.c ft_memset.c ft_strchr.c ft_strnstr.c ft_isalnum.c \
				ft_memchr.c ft_putchar_fd.c ft_strlcat.c ft_strrchr.c ft_isalpha.c ft_memcmp.c \
				ft_putendl_fd.c ft_strlcpy.c ft_putnbr_fd.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_itoa.c	ft_split.c	\
				ft_lstadd_front.c ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c) \
			$(addprefix ./ft_printf/, \
				ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr_base.c ft_putptr.c) \
			$(addprefix ./get_next_line/, \
				get_next_line.c get_next_line_utils.c) \
			$(addprefix ./vec_lib/, \
				vec_alpha_sort.c vec_copy.c vec_free.c vec_from.c vec_insert.c vec_new.c \
				vec_prepend.c vec_remove.c vec_replace_str.c vec_append.c vec_copy_len.c \
				vec_free_str.c vec_get.c vec_iter.c vec_pop.c vec_push.c vec_remove_str.c  vec_resize.c)

OBJECTS = $(SOURCES:.c=.o)

HEADERS = ./

CC: cc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS)
	@ar -rsc $(NAME) $(OBJECTS)
	@echo "\033[32;1mLIBFT Compilation successful!\033[0m"


%.o: %.c
	@cc $(CFLAGS) -c $< -o $@ -I$(HEADERS)

clean:
	@rm -f $(OBJECTS)
	@echo "\033[32;1mCleaned files\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[32;1mRemoved program!\033[0m"

re: fclean all

.PHONY: all clean fclean re