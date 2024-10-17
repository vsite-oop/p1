#include "app.h"

namespace vsite::oop::p1 
{
	double f1(int a, int b)
	{
		return pow(a, b);
	}

	bool f2(bool a)
	{
		return !a;
	}

	int f3(int a, int b, int c, int d)
	{
		return a + b + c + d;
	}

	std::string f4(int a)
	{
		return "int";
	}

	std::string f4(bool a)
	{
		return "bool";
	}

	std::string f4(double a)
	{
		return "double";
	}

	bool f5(std::string& s, int a)
	{
		if (a > 0)
		{
			s += std::to_string(a % 10);
			return true;
		}

		return false;
	}

	void f6(int a, int b, std::ostream& os)
	{
		os << a << '\n' << b;
	}
} 
