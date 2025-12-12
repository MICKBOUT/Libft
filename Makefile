# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 13:11:57 by mboutte           #+#    #+#              #
#    Updated: 2025/12/12 14:58:18 by mboutte          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC = cc
CFLAGS= -Wall -Wextra -Werror -Iincludes -MMD -MP

INCLUDES_DIR= includes
HEADER = $(INCLUDES_DIR)/libft.h

SRCS_DIR= SRC
SRCS=\
	$(SRCS_DIR)/ft_atoi.c				\
	$(SRCS_DIR)/ft_bzero.c				\
	$(SRCS_DIR)/ft_calloc.c				\
	$(SRCS_DIR)/ft_isalnum.c			\
	$(SRCS_DIR)/ft_isalpha.c			\
	$(SRCS_DIR)/ft_isascii.c			\
	$(SRCS_DIR)/ft_isdigit.c			\
	$(SRCS_DIR)/ft_isprint.c			\
	$(SRCS_DIR)/ft_itoa.c				\
	$(SRCS_DIR)/ft_lstadd_back_bonus.c	\
	$(SRCS_DIR)/ft_lstadd_front_bonus.c	\
	$(SRCS_DIR)/ft_lstclear_bonus.c		\
	$(SRCS_DIR)/ft_lstdelone_bonus.c	\
	$(SRCS_DIR)/ft_lstiter_bonus.c		\
	$(SRCS_DIR)/ft_lstlast_bonus.c		\
	$(SRCS_DIR)/ft_lstmap_bonus.c		\
	$(SRCS_DIR)/ft_lstnew_bonus.c		\
	$(SRCS_DIR)/ft_lstsize_bonus.c		\
	$(SRCS_DIR)/ft_memchr.c				\
	$(SRCS_DIR)/ft_memcmp.c				\
	$(SRCS_DIR)/ft_memcpy.c				\
	$(SRCS_DIR)/ft_memmove.c			\
	$(SRCS_DIR)/ft_memset.c				\
	$(SRCS_DIR)/ft_minmax.c				\
	$(SRCS_DIR)/ft_printf.c				\
	$(SRCS_DIR)/ft_ptrlen.c				\
	$(SRCS_DIR)/ft_putchar.c			\
	$(SRCS_DIR)/ft_putendl_fd.c			\
	$(SRCS_DIR)/ft_puthexa_printf.c		\
	$(SRCS_DIR)/ft_putnbr_fd.c			\
	$(SRCS_DIR)/ft_putnbr_printf.c		\
	$(SRCS_DIR)/ft_putpointer.c			\
	$(SRCS_DIR)/ft_putstr_fd.c			\
	$(SRCS_DIR)/ft_putstr_printf.c		\
	$(SRCS_DIR)/ft_putunsigned.c		\
	$(SRCS_DIR)/ft_size_printf.c		\
	$(SRCS_DIR)/ft_split.c				\
	$(SRCS_DIR)/ft_strchr.c				\
	$(SRCS_DIR)/ft_strdup.c				\
	$(SRCS_DIR)/ft_striteri.c			\
	$(SRCS_DIR)/ft_strjoin.c			\
	$(SRCS_DIR)/ft_strlcat.c			\
	$(SRCS_DIR)/ft_strlcpy.c			\
	$(SRCS_DIR)/ft_strlen.c				\
	$(SRCS_DIR)/ft_strmapi.c			\
	$(SRCS_DIR)/ft_strncmp.c			\
	$(SRCS_DIR)/ft_strnstr.c			\
	$(SRCS_DIR)/ft_strrchr.c			\
	$(SRCS_DIR)/ft_strtrim.c			\
	$(SRCS_DIR)/ft_substr.c				\
	$(SRCS_DIR)/ft_tolower.c			\
	$(SRCS_DIR)/ft_toupper.c			\

BONUS_SRCS=\
	$(SRCS_DIR)ft_lstnew_bonus.c		\
	$(SRCS_DIR)ft_lstnew_bonus.c 		\
	$(SRCS_DIR)ft_lstadd_front_bonus.c	\
	$(SRCS_DIR)ft_lstsize_bonus.c		\
	$(SRCS_DIR)ft_lstlast_bonus.c		\
	$(SRCS_DIR)ft_lstadd_back_bonus.c	\
	$(SRCS_DIR)ft_lstdelone_bonus.c 	\
	$(SRCS_DIR)ft_lstiter_bonus.c		\
	$(SRCS_DIR)ft_lstmap_bonus.c		\
	$(SRCS_DIR)ft_lstclear_bonus.c

OBJS= $(SRCS:.c=.o)

BONUS_OBJS= $(BONUS_SRCS:.c=.o)

ALL_D= $(SRCS:.c=.d) $(BONUS_SRCS:.c=.d)

all: $(NAME)

bonus: .bonus_done

.bonus_done: $(BONUS_OBJS) Makefile
	ar rcs $(NAME) $(BONUS_OBJS)
	@touch .bonus_done

$(NAME): $(OBJS) Makefile
	ar rcs $(NAME) $(OBJS)

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS) $(ALL_D) .bonus_done

fclean: clean
	rm -f $(NAME) 

re: fclean all

-include $(ALL_D)

.PHONY: all clean fclean re bonus