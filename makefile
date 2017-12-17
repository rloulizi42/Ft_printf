# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 14:36:00 by rloulizi          #+#    #+#              #
#    Updated: 2017/09/26 18:34:53 by rloulizi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_itoa.c ft_putchar.c ft_putendl.c ft_putnbr.c ft_putstr.c \
	   ft_strcmp.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_strcat.c \
	   ft_strcpy.c ft_strncpy.c ft_strsub.c ft_strtrim.c ft_memalloc.c \
	   ft_word_number.c ft_strrev.c ft_itoa_base.c ft_atoi2.c ft_conv.c \
	   ft_conv2.c ft_conv3.c ft_conv4.c ft_conv5.c ft_espace.c \
	   ft_itoa_base.c ft_memalloc.c ft_memset.c ft_min_wi.c ft_mod.c \
	   ft_mod2.c ft_prec.c ft_printf.c ft_upp.c ft_wchar.c ft_strnew.c ft_strchr.c \
	   ft_espace2.c ft_static_esp.c ft_strdel.c ft_static_sharp.c \
	   ft_static_esp2.c \

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
