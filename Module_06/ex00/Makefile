CXX = c++
TARGET = converter
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = ScalarConverterHelper.cpp ScalarConverter.cpp main.cpp
OBJ = $(SRCS:%.cpp=%.o)

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all