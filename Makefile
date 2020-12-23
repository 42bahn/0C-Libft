# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahn <bahn@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/21 15:47:18 by bahn              #+#    #+#              #
#    Updated: 2020/12/23 21:34:49 by bahn             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR_OBJS = ./
OBJS = $(addprefix $(DIR_OBJS), $(addsuffix .o, $(FILES)))
DIR_SRCS = ./
SRCS = $(addprefix $(DIR_SRCS), $(addsuffix .c, $(FILES)))

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -l.
AR = ar crs
RM = rm -f

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
