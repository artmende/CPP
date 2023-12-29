# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artmende <artmende@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 16:46:02 by artmende          #+#    #+#              #
#    Updated: 2023/12/29 14:46:03 by artmende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	./main.cpp \
		./BitcoinExchange.cpp \

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

NAME = btc

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