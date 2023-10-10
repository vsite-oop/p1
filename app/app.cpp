#include "app.h"

#include <format>
#include <cmath>
#include <string>
#include <sstream>
#include <iostream>

namespace vsite::oop::p1 {

/*
* function implementations
*/

    double f1(int x, int y) {
        return pow(x, y);
    }

    bool f2(bool x) {
        return !x;
    };

    int f3(int a, int b, int c, int d) {
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

    bool f5(std::string& s, int x) {
        if (x > 0) {
            int digit = x % 10;
            s = s + std::to_string(digit);

            return true;
        }
        return false;
    }


    void f6(int x, int y, std::ostream& ss) {
        ss << x << "\n" << y;
    }

} // namespace

//todo commit
//
// izmjena typeid u const string
// izmjena f6 stringstream u ostream