#include <string.h>
#include <iostream>
#include <fstream>
#include "../includes/Parser.hpp"

int main (void)
{
	std::ifstream infile;
	std::string data;

	Line line;

	infile.open("./srcs/input.avm");
	while (getline(infile, data))
	{
		line.evaluateLine(data);
	}
	return 0;
}