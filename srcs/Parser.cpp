#include "../includes/Parser.hpp"

Parser::Parser()
{

}

Parser::Parser(const Parser &rhs)
{
	this->line = rhs.line;
}

Parser::~Parser()
{

}
Parser& Parser::operator=(const Parser &rhs)
{
	this->line = rhs.line;
	return *this;
}