#include "app.h"

#include <format>



namespace vsite::oop::p1 {


	double f1(int x, int y) {
		return pow(x, y);
	}
	bool f2(bool a) {
		return !a;
	}

	int f3(int x, int y, int z, int k) {
		return x + y + z + k;
	}

	std::string f4(int x) {
		return "int";

	}


	std::string f4(bool x) {
		return "bool";
	}

	std::string f4(double x) {
		return "double";
	}


	bool f5(std::string& s, int x) {
		if (x <= 0) {
			return false;

		}
		s += std::to_string(x % 10);
		return true;
	}

	void f6(int a, int b, std::ostream& ss) {
		ss << a << "\n" << b;

	}

} // namespace
