#include "file_rep.hpp"

void file_replace(char **argv)
{
	if (!(argv && argv[1] && argv[2] && argv[3] && !argv[4]))
	{
		std::cerr << "Enter Valid argument.\n";
		return ;
	}

	std::string file_name = argv[1], s1 = argv[2], s2 = argv[3];
	std::string content, result, file_replace;
	std::ifstream fd_in;
	std::ofstream fd_out;

	file_replace = file_name + ".replace";
	fd_in.open(file_name.c_str());
	fd_out.open(file_replace.c_str());

	if (!fd_in.is_open() || !fd_out.is_open())
	{
		std::cout << "Error during file opening." << std::endl;
		return ;
	}

	std::getline(fd_in, content, '\0');
	size_t i = 0;
	size_t pos;

	while (!s1.empty() && i < content.length())
	{
		pos = content.find(s1, i);
		if (pos != std::string::npos && i == pos)
		{
			result += s2;
			i += s1.length();
		}
		else
			result += content[i++];
	}

	fd_out << result;
	fd_out.close();
	fd_in.close();
}