# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artmende <artmende@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 14:07:10 by artmende          #+#    #+#              #
#    Updated: 2022/05/12 14:11:27 by artmende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	./main.cpp \

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
