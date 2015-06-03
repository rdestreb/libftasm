#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 17:57:44 by rdestreb          #+#    #+#              #
#    Updated: 2015/06/03 17:09:19 by rdestreb         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= libfts.a

OBJ			= $(SRC:.s=.o)
CC			= nasm
CFLAGS		= -f
RM			= /bin/rm -f
ECHO		= /bin/echo
SRCDIR		= ./
SRC 		= $(addprefix $(SRCDIR), $(SRCFILES))
SRCFILES	=	ft_isalpha.s \
				ft_isdigit.s \
				ft_isalnum.s \
				ft_isascii.s \
				ft_isprint.s \
				ft_tolower.s \
				ft_toupper.s \

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@$(ECHO) '> Compiled'

%.o: %.s
	$(CC) $(CFLAGS) macho64 -o $@ $<

clean:
	-@$(RM) $(OBJ)
	-@$(RM) *~
	@$(ECHO) '> Directory cleaned'

fclean:	clean
	-@$(RM) $(NAME)
	@$(ECHO) '> Remove executable'

re:	fclean all

.PHONY:	all clean fclean re
