# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/06 17:16:09 by dmeyer            #+#    #+#              #
#    Updated: 2026/10/07 17:57:01 by dmeyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variable
CC = cc
CFLAG = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_sprint ft_strlen ft_memset ft_bzero\
ft_memcpy ft_memmove ft_strlcpy ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr \
ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup
OBJ = $(SRC : .c=.o)
INCLUDE = stdlb.h
RM = rm -rf
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
#reglas
%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

all : $(NAME)


clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all crean fclean re