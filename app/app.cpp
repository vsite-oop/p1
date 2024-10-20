#include "app.h"
#include "iostream"
#include "cmath"
#include <format>

namespace vsite::oop::p1 {

/*
* function implementations
*/
	double f1(int a, int b) {
		return pow (a, b);
	}

	bool f2(bool c) {
		return !c;
	}

	int f3(int a, int b, int c, int d) {
		return a + b + c + d;
	}

	std::string f4(int) {
		return "int";
	}
	std::string f4(bool) {
		return "bool";
	}
	std::string f4(double) {
		return "double";
	}

	bool f5(std::string& s, int a) {
		if (a < 1) {
			return false;
		}
		else {
			int b = a % 10;
			s += std::to_string(b);
			return true;
		}
	}

	void f6(int a, int b, std::ostream & os) {
			os << a << '\n' << b;
		}
	} // namespace
