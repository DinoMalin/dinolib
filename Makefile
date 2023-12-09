CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude

FILES =	ft_isdigit ft_isalnum ft_isalpha ft_isascii ft_isprint \
		ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp ft_calloc \
		ft_strlen ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strnstr ft_atoi \
		ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_puthexa_fd ft_putunbr_fd\
		ft_lstnew ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter ft_lstmap ft_lstsize ft_lstlast \
		ft_printf

OBJ_DIR = obj/
SUBDIRS = is lst mem put str

SRCS = $(addprefix src/, $(addsuffix .c, $(FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILES)))

NAME = libft.a

.PHONY = all clean fclean re

all: $(OBJ_DIR) $(OBJS)
	@echo "\033[32m✔ Compilation des fichiers sources...\033[37m"
	@ar -rcs $(NAME) $(OBJS)
	@echo "\033[32m✔ Bibliothèque créee.\033[37m"

clean:
	@echo "\033[31m✔ Suppression des fichiers sources...\033[37m"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

obj/%.o: src/*/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $@
