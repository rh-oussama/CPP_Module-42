#include "iter.hpp"
#include <iostream>

template <typename T>
void print(T &x) {
    std::cout << x << std::endl;
}

void incrementInt(int & x)
{
	x += 1;
}

void toUpperCase(char & c)
{
	c = std::toupper(c);
}

int main()
{
	int intarr[] = { 1, 2, 3 };
	char chararr[] = { 'a', 'b', 'c' };
	std::cout << "====" << std::endl;
	iter(intarr, 3, print);
	std::cout << "====" << std::endl;
	iter(intarr, 3, incrementInt);
	iter(intarr, 3, print);
	std::cout << "====" << std::endl;
	iter(chararr, 3, print);
	std::cout << "====" << std::endl;
	iter(chararr, 3, toUpperCase);
	iter(chararr, 3, print);

	return 0;
}