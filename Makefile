# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarbonn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 14:06:14 by rcarbonn          #+#    #+#              #
#    Updated: 2023/06/07 14:06:21 by rcarbonn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# -- Commande -- #

RM    = rm -f
CC    = gcc
FL    = -Wall -Werror -Wextra
COMP    = $(CC) $(FL)

# -- SRC -- #

SRC = 


SRCO    = $(SRC:.c=.o)

NAME    = printf.a

# -- Target -- #

all:		$(NAME)

$(NAME):	$(SRCO)
		ar rcs $(NAME) $(SRCO)

clean:
		$(RM) $(SRCO)

fclean:
		$(RM) $(NAME) $(SRCO)

re:		fclean $(NAME)

