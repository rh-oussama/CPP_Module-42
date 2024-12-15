#include "file_rep.hpp"

int main(int ac, char **argv)
{
	if (ac != 4)
	{
		std::cerr << "Enter Valid argument.\n";
		return (1);
	}
	file_replace(argv);
	return (0);
}