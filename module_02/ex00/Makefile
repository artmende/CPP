# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artmende <artmende@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 11:53:15 by artmende          #+#    #+#              #
#    Updated: 2022/03/30 11:54:25 by artmende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	./Fixed.cpp \
		./main.cpp \

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

NAME = fixed

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
