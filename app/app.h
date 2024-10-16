#pragma once

#include <string>
#include <iostream>
#include <ostream>

namespace vsite::oop::p1
{
	/*
	* function declarations
	*/
	double f1(const int x, const int y);

	bool f2(const bool expression);

	int f3(
		const int a = 1,
		const int b = 2,
		const int c = 3,
		const int d = 4
	);

	std::string f4(const bool element);
	std::string f4(const int element);
	std::string f4(const double element);

	bool f5(std::string& s, const int num);

	void f6(
		const int x,
		const int y,
		std::ostream& ss
	);

}