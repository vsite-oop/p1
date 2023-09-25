#include "app.h"

#include <format>

namespace vsite::oop::p1 {

/*
* function implementations
*/

    double f1(int a, int b) {
        return pow(a, b);
    }

    bool f2(bool b) {
        return !b;
    }

    int f3(int a, int b, int c, int d) {
        return a + b + c + d;
    }

    std::string f4(int) { return "int"; }
    std::string f4(bool) { return "bool"; }
    std::string f4(double) { return "double"; }

    bool f5(std::string& s, int n) {
        if (n <= 0)
            return false;
        s += std::to_string(n % 10);
        //    s += std::format("{}", n%10);
        return true;
    }

    void f6(int a, int b, std::ostream& os) {
        os << a << '\n' << b;
    }

} // namespace
