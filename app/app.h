#pragma once

#include <string>
#include <iostream>

namespace vsite::oop::p1 
{
	double f1(int a, int b);
	bool f2(bool b);
	int f3(int a = 1, int b = 2, int c = 3, int d = 4);

	std::string f4(int);
	std::string f4(bool);
	std::string f4(double);

	bool f5(std::string& s, int n);

	void f6(int a, int b, std::ostream& os);
}
