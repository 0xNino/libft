# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 11:47:13 by 0xNino            #+#    #+#              #
#    Updated: 2022/02/23 16:13:13 by 0xNino           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	additional/ft_atol.c \
			additional/ft_isnumber.c \
			additional/ft_itoa.c \
			additional/ft_putchar.c \
			additional/ft_putchar_fd.c \
			additional/ft_putendl_fd.c \
			additional/ft_putnbr.c \
			additional/ft_putnbr_base.c \
			additional/ft_putnbr_fd.c \
			additional/ft_putstr.c \
			additional/ft_putstr_fd.c \
			additional/ft_split.c \
			additional/ft_strchr_pos.c \
			additional/ft_striteri.c \
			additional/ft_strjoin.c \
			additional/ft_strjoin_variadic.c \
			additional/ft_strmapi.c \
			additional/ft_strrchr_pos.c \
			additional/ft_strtrim.c \
			additional/ft_substr.c \
			dlst/ft_dlst_utils.c \
			dlst/ft_dlstadd_first.c \
			dlst/ft_dlstadd_last.c \
			dlst/ft_dlstclear.c \
			dlst/ft_dlstcontent.c \
			dlst/ft_dlstnew.c \
			dlst/ft_dlstpush_first.c \
			dlst/ft_dlstpush_last.c \
			dlst/ft_dlstput_first.c \
			dlst/ft_dlstput_last.c \
			gnl/get_next_line.c \
			libc/ft_atoi.c \
			libc/ft_bzero.c \
			libc/ft_calloc.c \
			libc/ft_isalnum.c \
			libc/ft_isalpha.c \
			libc/ft_isascii.c \
			libc/ft_isdigit.c \
			libc/ft_isprint.c \
			libc/ft_memchr.c \
			libc/ft_memcmp.c \
			libc/ft_memcpy.c \
			libc/ft_memmove.c \
			libc/ft_memset.c \
			libc/ft_strchr.c \
			libc/ft_strcmp.c \
			libc/ft_strdup.c \
			libc/ft_strlcat.c \
			libc/ft_strlcpy.c \
			libc/ft_strlen.c \
			libc/ft_strncmp.c \
			libc/ft_strnstr.c \
			libc/ft_strrchr.c \
			libc/ft_tolower.c \
			libc/ft_toupper.c \
			lst/ft_lstadd_back.c \
			lst/ft_lstadd_front.c \
			lst/ft_lstclear.c \
			lst/ft_lstdelone.c \
			lst/ft_lstiter.c \
			lst/ft_lstlast.c \
			lst/ft_lstmap.c \
			lst/ft_lstnew.c \
			lst/ft_lstsize.c \
			math/ft_abs.c \
			math/ft_max.c \
			math/ft_min.c \
			printf/ft_hexlen.c \
			printf/ft_htoc.c \
			printf/ft_itoh.c \
			printf/ft_printf.c \
			printf/ft_putchar_len.c \
			printf/ft_puthex_len.c \
			printf/ft_putnbr_len.c \
			printf/ft_putstr_len.c \
			sort/ft_quicksort.c \
			utils/ft_argv_to_i_arr.c \
			utils/ft_free_arr.c \
			utils/ft_free_ptr.c \
			utils/ft_intlen.c \
			utils/ft_loop.c \
			utils/ft_print_i_arr.c \
			utils/ft_swap_int.c \
			utils/ft_uintlen.c \

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
