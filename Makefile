#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 17:57:44 by rdestreb          #+#    #+#              #
#    Updated: 2015/05/29 18:23:43 by rdestreb         ###   ########.fr        #
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
SRCFILES	= hello.s \

all: $(NAME)

$(NAME): $(OBJ)
	ld $(OBJ) -macosx_version_min 10.10 -lSystem
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
