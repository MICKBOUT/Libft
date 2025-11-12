# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 13:11:57 by mboutte           #+#    #+#              #
#    Updated: 2025/11/12 17:34:49 by mboutte          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD -MP
LIB_BONUS= bonus_library 
SRCS_INCLUDE = libft.h
SRCS=\
	ft_atoi.c		\
	ft_bzero.c		\
	ft_calloc.c		\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_itoa.c		\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_memset.c		\
	ft_putchar_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_putstr_fd.c	\
	ft_split.c		\
	ft_strchr.c		\
	ft_strdup.c		\
	ft_striteri.c	\
	ft_strjoin.c	\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c		\
	ft_strncmp.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_strtrim.c	\
	ft_substr.c		\
	ft_tolower.c	\
	ft_toupper.c	\
	ft_strmapi.c
BONUS_SRCS=\
	ft_lstnew_bonus.c		\
	ft_lstnew_bonus.c 		\
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c		\
	ft_lstlast_bonus.c		\
	ft_lstadd_back_bonus.c	\
	ft_lstdelone_bonus.c 	\
	ft_lstiter_bonus.c		\
	ft_lstmap_bonus.c		\
	ft_lstclear_bonus.c


OBJS= $(SRCS:.c=.o)

BONUS_OBJS= $(BONUS_SRCS:.c=.o)

ALL_D= $(SRCS:.c=.d) $(BONUS_SRCS:.c=.d)

all: $(NAME)

bonus: .bonus_done

.bonus_done: $(BONUS_OBJS) $(SRCS_INCLUDE) Makefile
	ar rcs $(NAME) $(BONUS_OBJS)
	@touch .bonus_done

$(NAME): $(OBJS) $(SRCS_INCLUDE) Makefile
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS) $(ALL_D) .bonus_done

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(ALL_D)

.PHONY: all clean fclean re bonus