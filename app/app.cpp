#include "app.h"

#include <format>

#include <sstream>

namespace vsite::oop::p1 {

/*
* function implementations
*/
	double f1(int a, int b) {
		return pow(a, b);
	}
	
	bool f2(bool a) {
		return a ? false : true;
	}
	
	int f3(int a, int b, int c, int d) {  // default values are specified only in function declaration!
		return a + b + c + d;
	}
	
	std::string f4(int a) {
		return "int";
	}

	std::string f4(bool a) {
		return "bool";
	}

	std::string f4(double a) {
		return "double";
	}

	bool f5(std::string& s, int number) {
		if (number > 0) {
			int last_digit = number % 10;
			std::string last_string = std::to_string(last_digit);  // conversion of int to std::string
			s += last_string;  // concatenation
			return true;
		}
		return false;
	}


	void f6(int a, int b, std::stringstream& ss) {
		ss << a << "\n" << b;
	}

} // namespace
