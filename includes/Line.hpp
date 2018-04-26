#include <string>
#include <iostream>
#include <vector>
#include "IOperand.hpp"

#define RED "\e[1;31;4m"
#define GREEN "\e[32m"
#define ESC "\e[0m"
#define BOLD "\e[4m"
#define UNBOLD "\e[24m"

class Line
{
public:
	Line();
	Line(const Line &);
	Line &operator=(const Line &);
	virtual ~Line();

	void evaluateLine(std::string const &line);
	static const std::vector <std::string> possibleOperations;
	static const std::vector <std::string> possibleOperandTypes;
private:
	std::string _operand;
	std::string _operation;
	std::string _operandType;
};