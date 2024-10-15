#pragma once

#include <string>
#include <iostream>
#include <format>
#include <sstream>
#include <cmath>

namespace vsite::oop::p1 
{
	double f1(int a, int b);
	bool f2(bool a);
	int f3(int a = 1, int b = 2, int c = 3, int d = 4);
	std::string f4(int a);
	std::string f4(bool a);
	std::string f4(double a);
	bool f5(std::string& s, int a);
	void f6(int a, int b, std::stringstream& ss);
}
