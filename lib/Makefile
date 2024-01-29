# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 20:11:50 by naatoyan          #+#    #+#              #
#    Updated: 2024/01/29 21:57:36 by naatoyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_isdigit.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c ft_atoi.c \
	  ft_isprint.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c \
	  ft_bzero.c ft_itoa.c ft_memset.c ft_strdup.c ft_strncmp.c ft_calloc.c \
	  ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_isalnum.c ft_putendl_fd.c \
	  ft_strjoin.c ft_strrchr.c ft_isalpha.c ft_memchr.c ft_putnbr_fd.c \
	  ft_strlcat.c ft_strtrim.c ft_isascii.c ft_memcmp.c ft_putstr_fd.c \
	  ft_strlcpy.c ft_substr.c
BON = ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstadd_back.c ft_lstnew.c \
	  ft_lstadd_front.c ft_lstsize.c ft_lstclear.c ft_lstdelone.c
OBJ = $(SRC:%.c=%.o)
BOBJ = $(BON:%.c=%.o)

RESET			= "\033[0m"
BLACK    		= "\033[30m"    # Black
RED      		= "\033[31m"    # Red
GREEN    		= "\033[32m"    # Green
YELLOW   		= "\033[33m"    # Yellow
BLUE     		= "\033[34m"    # Blue
MAGENTA  		= "\033[35m"    # Magenta
CYAN     		= "\033[36m"    # Cyan
WHITE       	= "\033[37m"    # White

all : $(NAME)

$(NAME) : $(OBJ)
	@echo $(GREEN)
	ar rcs $(NAME) $(OBJ)
	@echo $(RESET)

%.o : %.c
	@echo $(YELLOW)
	$(CC) $(FLAGS) -c $< -o $@ 
	@echo $(RESET)

bonus : $(BOBJ)
	@echo $(GREEN)
	ar rcs $(NAME) $(BOBJ)
	@echo $(RESET)

clean :
	@echo $(RED)
	rm -f $(OBJ)
	rm -f $(BOBJ)
	@echo $(RESET)

fclean : clean
	@echo $(RED)
	rm -f $(NAME)
	@echo $(RESET)

re : fclean all

.PHONY: all bonus clean fclean re
