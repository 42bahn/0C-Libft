# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahn <bahn@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/21 15:47:18 by bahn              #+#    #+#              #
#    Updated: 2020/12/27 14:53:41 by bahn             ###   ########.fr        #
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
