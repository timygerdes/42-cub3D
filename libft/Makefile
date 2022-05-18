# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/14 12:19:34 by tgerdes           #+#    #+#              #
#    Updated: 2022/04/10 15:17:38 by tgerdes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-I. -Wall -Wextra -Werror
SRC=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
	ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_strdup.c ft_calloc.c ft_atoi.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	get_next_line_utils.c get_next_line.c ft_printf.c \
	ft_print_cspp.c ft_print_diuxx.c ft_putnbr_base.c ft_uitoa.c \
	ft_numlen_base.c ft_itoa_base.c ft_numlen.c \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c ft_strappend.c

OBJ=$(SRC:.c=.o)
	
all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
