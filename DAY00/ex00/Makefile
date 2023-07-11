# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muteza <muteza@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/11 18:25:13 by muteza            #+#    #+#              #
#    Updated: 2023/07/11 18:52:13 by muteza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=           megaphone

SRCS=           megaphone.cpp\
			
OBJS=           $(SRCS:.cpp=.o)

CC=             c++

CFLAGS  =       -Wall -Wextra -Werror -std=c++98

all:            $(NAME)
      
%.o:%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf $$'\033[1m*'

# do:
# 	@make $(NAME)

$(NAME):                $(OBJS)
			@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
			# @say -v Thomas "compilation terminé" &
			@echo $$'\n✅ \033[1;32mproject compiled\033[0m ✅'

library:
			# @say -v Thomas "veuillez patienter, votre projet est en cours de compilation" &
			@echo "\n\033[33mcompiling libft\033[0m"
		    
clean:
			@rm -f $(OBJS)
			@echo $$'\033[1;31mremoved object files\033[0m'
		    
fclean:                 clean
			@rm -f $(NAME)
			@echo $$'\033[1;31mremoved $(NAME)\033[0m'


re:                     fclean all