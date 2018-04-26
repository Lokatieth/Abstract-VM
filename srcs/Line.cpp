#include "../includes/Line.hpp"

Line::Line()
{
}

Line::Line(const Line &rhs) 
{
	_operand = rhs._operand;
	_operation = rhs._operation;
	_operandType = rhs._operandType;
}

Line::~Line()
{

}

bool isOpCorrect(std::string const &op)
{
	std::string result;
	if (std::find(Line::possibleOperations.begin(), Line::possibleOperations.end(),
	 op) != Line::possibleOperations.end())
	{
		std::cout << GREEN << op << ESC << std::endl;
		return true;
	}
	else
	{
		std::cout << RED << op << ESC << std::endl;
		return false;
	}

}

void Line::evaluateLine(std::string const &line)
{
	_operation = line.substr(0, line.find(" "));
	isOpCorrect(_operation);

	
	// std::string result1 = ;
}

Line &Line::operator=(const Line &rhs)
{
	_operand = rhs._operand;
	_operation = rhs._operation;
	_operandType = rhs._operandType;
	return *this;
}

const std::vector <std::string> Line::possibleOperations = {
	"push",
	"pop",
	"dump",
	"assert",
	"add",
	"sub",
	"mul",
	"div",
	"mod",
	"print",
	"exit",
	";",
	";;"
};