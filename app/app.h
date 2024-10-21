#pragma once

#include <string>
#include <iostream>

namespace vsite::oop::p1 
{
/*  
* function declarations
*/

    double f1(double a, int n);
    bool f2(bool trueCond);
    int f3(int a = 1, int b = 2, int c = 3, int d = 4); // 4 param
    std::string f4(int);
    std::string f4(bool);
    std::string f4(double);
    bool f5(std::string& s, const int broj);
    void f6(int a, int b, std::ostream& os);

}
