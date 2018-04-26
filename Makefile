NAME = abstract

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++11

SRCS =	srcs/main.cpp \
		srcs/Parser.cpp \
		srcs/Line.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

debug: fclean
debug: CXXFLAGS = -DDEBUG -g -Wall -Wextra
debug: all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS) $(CXXFLAGS)

re: fclean all
