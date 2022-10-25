#pragma once

#include <string>
#include <iostream>
#include <sstream>

namespace vsite::oop::p1
{
	/*
	* function declarations
	*/

	double f1(int a, int b);

	bool f2(bool);
	/*
	* 	auto ret = f2(1 == 1);
		Assert::AreEqual(1ull, sizeof(ret));

		Ovo u test.cpp-u služi tome da se osigura da koristimo bool, a ne int kao u c-u.
		sizeof(ret) vraæa unsigned long long.
		1ull konvertira integer 1 u unsigned long long, da bi mogli raditi
		usporedbu s varijablom ret.
	*/

	int f3(int a = 1, int b = 2, int c = 3, int d = 4);

	std::string f4(int a);

	std::string f4(bool a);

	std::string f4(double a);

	/*
		.c_str() konvertira std::string u char* ("c-ovski string") da bi mogli
		raditi usporedbu s char* stringovima koji su navedeni kao povratne
		vrijednosti u testu.
		U nekim drugim test frameworksima to se ne treba, ali ovaj zahtjeva da
		su te dvije stvari istog tipa.
	*/

	bool f5(std::string& s, int number);

	void f6(int a, int b, std::stringstream& ss);

}
