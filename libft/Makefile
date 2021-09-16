# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 15:16:01 by cmarouf           #+#    #+#              #
#    Updated: 2021/09/16 15:16:13 by cmarouf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#
SRCS 		= srcs/ft_calloc.c 		\
			  srcs/ft_isdigit.c		\
			  srcs/ft_memcpy.c		\
			  srcs/ft_strdup.c		\
			  srcs/ft_strncmp.c		\
			  srcs/ft_toupper.c		\
			  srcs/ft_isalnum.c		\
			  srcs/ft_isprint.c		\
			  srcs/ft_memmove.c		\
			  srcs/ft_strlcat.c		\
			  srcs/ft_strnstr.c		\
			  srcs/ft_atoi.c		\
			  srcs/ft_isalpha.c		\
			  srcs/ft_memchr.c		\
			  srcs/ft_memset.c		\
			  srcs/ft_strlcpy.c		\
			  srcs/ft_strrchr.c		\
			  srcs/ft_bzero.c		\
			  srcs/ft_isascii.c		\
			  srcs/ft_memcmp.c		\
			  srcs/ft_strchr.c		\
			  srcs/ft_strlen.c		\
			  srcs/ft_tolower.c		\
			  srcs/ft_substr.c		\
			  srcs/ft_strjoin.c		\
			  srcs/ft_strtrim.c		\
			  srcs/ft_split.c		\
			  srcs/ft_itoa.c		\
			  srcs/ft_strmapi.c		\
			  srcs/ft_striteri.c	\
			  srcs/ft_putchar_fd.c	\
			  srcs/ft_putstr_fd.c	\
			  srcs/ft_putendl_fd.c	\
			  srcs/ft_putnbr_fd.c	\

BONUS		= srcs/ft_lstnew.c		\
			  srcs/ft_lstadd_front.c\
			  srcs/ft_lstsize.c		\
			  srcs/ft_lstlast.c		\
			  srcs/ft_lstadd_back.c	\
			  srcs/ft_lstdelone.c	\
			  srcs/ft_lstclear.c	\
			  srcs/ft_lstiter.c		\
			  srcs/ft_lstmap.c		\

OBJS 		= ${SRCS:.c=.o}

OBJS_bonus	= ${BONUS:.c=.o}

RM 			= rm -f

CFLAGS 		= -Wall -Wextra -Werror

NAME		= libft.a

CC 			= gcc

.c.o:
					${CC} -I includes ${CFLAGS} -c $< -o ${<:.c=.o}

all:		$(NAME)


$(NAME): 	${OBJS}
					ar -rcs $(NAME) ${OBJS}

clean:
					${RM} ${OBJS} ${OBJS_bonus}

fclean:		clean
					${RM} $(NAME)

re:			fclean all

bonus: 		${OBJS} ${OBJS_bonus}
					ar -rcs $(NAME) ${OBJS} ${OBJS_bonus}
					
.PHONY: all clean fclean re bonus 
