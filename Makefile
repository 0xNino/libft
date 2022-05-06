# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 11:47:13 by 0xNino            #+#    #+#              #
#    Updated: 2022/04/20 15:37:58 by 0xNino           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
DIRS	=	additional dlst gnl libc lst math printf sort utils
SRCS	=	$(foreach dir, $(DIRS), $(wildcard $(dir)/*.c))
OBJS	=	$(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
