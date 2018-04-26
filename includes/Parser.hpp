#include <string>
#include <iostream>
#include "Line.hpp"

class Parser
{
public:
	Parser();
	Parser(const Parser &);
	Parser &operator=(const Parser &);
	virtual ~Parser();
	Line line;

private:
};