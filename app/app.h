#pragma once

#include <string>
#include <iostream>

namespace vsite::oop::p1
{
	double f1(int x, int y);

	bool f2(bool a);

	int f3(int x = 1, int y = 2, int z = 3, int k = 4);

	std::string f4(int x);

	std::string f4(bool x);

	std::string f4(double x);

	bool f5(std::string& s, int x);

	void f6(int a, int b, std::ostream& ss);

}
