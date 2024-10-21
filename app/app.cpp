#include "app.h"

#include <format>

namespace vsite::oop::p1 {

/*
* function implementations
*/
    double f1(double a, int n) {
        // ako je eksponent 0 vrati 1
        if (n == 0)
            return 1.0;

        double result = 1.0;

        //koristim abs da rezultat dobijem za pozitivne i negativne eksponente
        int exp = std::abs(n);

        for (int i = 0; i < exp; ++i) {
            result *= a;
        }

        // Ako je eksponent negativan vrati mi reciprocnu vrijednost
        return (n > 0) ? result : 1.0 / result;
    }

    //vrati mi razlicito od true
    bool f2(bool trueCond) {
        return !trueCond;
    }

    int f3(int a, int b, int c, int d) {
        return a+b+c+d;
    }
       

    void f6(int a, int b, std::ostream& os) {
        os << a << "\n" << b;
    }

} // namespace
