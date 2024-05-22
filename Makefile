# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emartins <emartins@contact.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 21:19:28 by emartins          #+#    #+#              #
#    Updated: 2024/05/22 12:33:20 by emartins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

FILES	=	ft_isalnum ft_isprint ft_memcmp ft_putchar_fd ft_split \
			ft_strlcat ft_strncmp ft_substr ft_atoi ft_isalpha ft_itoa \
			ft_memcpy  ft_putendl_fd ft_strchr  ft_strlcpy ft_strnstr \
			ft_tolower ft_bzero ft_isascii ft_memmove \
			ft_putnbr_fd  ft_strdup  ft_strlen  ft_strrchr ft_toupper \
			ft_calloc  ft_isdigit ft_memchr  ft_memset ft_putstr_fd \
			ft_strjoin ft_strmapi ft_strtrim ft_striteri



FILES_BONUS = ft_lstnew_bonus ft_lstadd_front_bonus ft_lstsize_bonus ft_lstlast_bonus \
			  ft_lstadd_back_bonus ft_lstdelone_bonus ft_lstclear_bonus \
              ft_lstiter_bonus ft_lstmap_bonus




SRCS	   =	$(addsuffix .c, $(FILES))
SRCSB	   =	$(addsuffix .c, $(FILES_BONUS))
OBJS	   =	$(addsuffix .o, $(FILES))
OBJSB	   =	$(addsuffix .o, $(FILES_BONUS))
NAME	   =	libft.a
INCLUDES = ./


all:		$(NAME)

$(NAME):	$(SRCS) libft.h
			@$(CC) $(CFLAGS) -I $(INCLUDES) -c $(SRCS) $(SRCSB)
			@ar rc $(NAME) $(OBJS) $(OBJSB)

bonus:		$(OBJSB)
			@ar rc $(NAME) $(OBJSB)

clean:
			$(RM) $(OBJS) $(OBJSB)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
