#include "app.h"

#include <format>

namespace vsite::oop::p1 {

	double f1(int a, int b) {
		return pow(a, b);
	}

	bool f2(bool b) {
		return (!b);

	}

	int f3(int a, int b, int c, int d) {
		return (a + b + c + d);
	}


	std::string f4(int b) {
		return "int";
	}

	std::string f4(bool b) {
		return "bool";
	}

	std::string f4(double b) {
		return "double";
	}


	bool f5(std::string& s, int n) {
		if (n > 0) {
			int znamenka = n % 10;
			s += std::to_string(znamenka);
			return true;
		}
		return false;
	}


	void f6(int a, int b, std::ostream& ss) {
		ss << a << '\n' << b;
	}
}