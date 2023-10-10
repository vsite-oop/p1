#pragma once

#include <string>
#include <iostream>
#include <string>
#include <sstream>

namespace vsite::oop::p1 
{
/*  
* function declarations
*/

    double f1(int x, int y);
    bool f2(bool x);
    int f3(int a = 1, int b = 2, int c = 3, int d = 4);

    std::string f4(int a);
    std::string f4(bool a);
    std::string f4(double a);

    bool f5(std::string& s, int x);

    void f6(int x, int y, std::stringstream& ss);

}
