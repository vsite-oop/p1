#include "app.h"

#include <format>
#include <cmath>
#include <complex>
#include <ostream>

namespace vsite::oop::p1 {

	/*
	* function implementations
	*/
	double f1(const int x, const int y)
	{
		return std::pow(x, y);
	}

	bool f2(const bool expression)
	{
		return  !expression;
	}


	int f3(const int a, const int b, const int c, const int d)
	{
		return a + b + c + d;
	}

	std::string f4(const bool element)
	{
		return "bool";
	}
	std::string f4(const int element)
	{
		return "int";
	}
	std::string f4(const double element)
	{
		return "double";
	}

	bool f5(std::string& s, const int num)
	{
		if (num <= 0)
		{
			return false;
		}

		s += std::to_string(num % 10);
		return true;
	}

	void f6(const int x, const int y, std::ostream& ss)
	{
		ss << std::format("{}\n{}", x, y);
	}
	//
} // namespace