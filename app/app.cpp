#include "app.h"

#include <format>
#include <cmath>
#include <complex>
#include <numeric>

namespace vsite::oop::p1 {

	/*
	* function implementations
	*/
	double f1(const int x, const int y)
	{
		return std::pow(static_cast<int>(x), static_cast<double>(y));
	}

	bool f2(const bool expression)
	{
		return not expression;
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

	void f6(const int x, const int y, std::stringstream& ss)
	{
		ss << std::format("{}\n{}", x, y);
	}
	//
} // namespace