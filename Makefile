# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahn <bahn@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/21 15:47:18 by bahn              #+#    #+#              #
#    Updated: 2020/12/29 18:09:58 by bahn             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES =	ft_strlen \
	ft_strlcpy \
	ft_strlcat \
	ft_strchr \
	ft_strrchr \
	ft_strnstr \
	ft_strncmp \
	ft_atoi \
	ft_isalpha \
	ft_isdigit \
	ft_isalnum \
	ft_isascii \
	ft_isprint \
	ft_toupper \
	ft_tolower \
	ft_memset \
	ft_bzero \
	ft_memcpy \
	ft_memccpy \
	ft_memchr \
	ft_memmove \
	ft_memcmp \
	ft_calloc \
	ft_strdup \
	ft_substr \
	ft_strjoin \
	ft_strtrim \
	ft_split \
	ft_itoa \
	ft_strmapi \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr 

DIR_OBJS	= ./
OBJS		= $(addprefix $(DIR_OBJS), $(addsuffix .o, $(FILES)))
DIR_SRCS	= ./
SRCS		= $(addprefix $(DIR_SRCS), $(addsuffix .c, $(FILES)))

CC		= gcc
CFLAGS		= -Wall -Wextra -Werror #-g -l.

AR		= ar crs
RM		= rm -f

NAME		= libft.a

.c.o:		$(SRCS)
		$(CC) $(CFLAGS) -c -o $@ $<

all:		$(NAME)

$(NAME):	$(OBJS)
		$(AR) $(NAME) $(OBJS)

clean: 
		$(RM) $(OBJS)

fclean: 	clean
		$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re
