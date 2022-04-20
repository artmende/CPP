# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artmende <artmende@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 14:19:15 by artmende          #+#    #+#              #
#    Updated: 2022/04/20 17:44:00 by artmende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRCS =	./Animal.cpp \
		./Dog.cpp \
		./Cat.cpp \
		./WrongAnimal.cpp \
		./WrongCat.cpp \
		./main.cpp \

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

NAME = ex00

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJS)

.cpp.o:
	@$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
