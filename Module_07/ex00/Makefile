CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = whatever
SRCS = main.cpp
OBJ = $(SRCS:%.cpp=%.o)


all: $(TARGET)

$(TARGET):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(TARGET)

re: fclean all

.PHONY: all clean fclean
