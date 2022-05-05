# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artmende <artmende@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:47:04 by artmende          #+#    #+#              #
#    Updated: 2022/05/05 12:01:46 by artmende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	./Bureaucrat.cpp \
		./Form.cpp \
		./ShrubberyCreationForm.cpp \
		./main.cpp \

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

NAME = ex02

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
