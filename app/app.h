#pragma once

#include <string>
#include <iostream>

namespace vsite::oop::p1
{
	/*
	* function declarations
	*/

	//f1
	double f1(int a, int b);
	
	//f2
	bool f2(bool a);

	//f3
	int f3(int a = 1, int b = 2, int c = 3, int d = 4);

	//f4
	std::string f4(int);
	std::string f4(bool);
	std::string f4(double);

	//f5
	bool f5(std::string& s, int a);

	//f6
	void f6(int a, int b, std::ostream& os);

}
