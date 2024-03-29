# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tihendri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 14:09:03 by tihendri          #+#    #+#              #
#    Updated: 2019/07/08 14:26:43 by tihendri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# static library that will be created
NAME 	= libft.a

# ar is an archiver that maintains groups of files as a single archive file
AR		= ar

# compilation command
CC 		= gcc

# compilation flags
CFLAGS	= -Wall -Wextra -Werror

# functions from part 1
PART1	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c	ft_strlen.c ft_strdup.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
		ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c

# functions from part 2
PART2	= ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
		ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
		ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# bonus functions - list functions
BONUS	= ft_lstadd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
		  ft_lstiter.c ft_lstmap.c

# extra functions
EXTRA	= ft_wordcount.c ft_strndup.c ft_realloc.c ft_count_letters.c \
		  ft_iswhitespace.c

FILES 	= $(PART1) $(PART2) $(BONUS) $(EXTRA)

SRC		= $(FILES)
OBJ 	= $(FILES:.c=.o)

.PHONY: all clean fclean re
# .PHONY is used to protect the command recipes assigned to it
# in case there's a file with that name

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) rcs $(NAME) $(OBJ)
# here we are creating/modifying an archive by calling $(AR)
# rcs: Replace, Create, Sort
# https://www.mkssoftware.com/docs/man1/ar.1.asp

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
