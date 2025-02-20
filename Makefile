NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente
SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_atoi.c \
      ft_itoa.c \
      ft_memcmp.c \
      ft_strncmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_calloc.c \
      ft_memchr.c \
      ft_putchar_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_putstr_fd.c \
      ft_bzero.c \
      ft_striteri.c \
      ft_strmapi.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strnstr.c \
      ft_strdup.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_split.c \
      ft_strlen.c \
      ft_strlcat.c \
      ft_strlcpy.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all