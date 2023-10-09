#include "CppUnitTest.h"
#include "../app/app.h"
#include <sstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace vsite::oop::p1;

namespace all_tests
{

TEST_CLASS(test_p1)
{
public:
	TEST_METHOD(test_1)
	{
		Assert::AreEqual(0., f1(0, 1));

		Assert::AreEqual(1., f1(1, 0));
		Assert::AreEqual(1., f1(1, 1));
		Assert::AreEqual(1., f1(1, 5));
		Assert::AreEqual(1., f1(1, -2));

		Assert::AreEqual(2., f1(2, 1));
		Assert::AreEqual(4., f1(2, 2));
		Assert::AreEqual(8., f1(2, 3));
		Assert::AreEqual(4., f1(-2, 2));
		Assert::AreEqual(-8., f1(-2, 3));
		Assert::AreEqual(0.25, f1(2, -2));

		Assert::AreEqual(1000., f1(10, 3));
	}
	TEST_METHOD(test_2)
	{
		Assert::IsFalse(f2(1 < 2));
		Assert::IsTrue(f2(2 < 1));
		auto ret = f2(1 == 1);
		Assert::AreEqual(1ull, sizeof(ret));
	}

	TEST_METHOD(test_3)
	{
		Assert::AreEqual(20, f3(2, 4, 6, 8));
		Assert::AreEqual(22, f3(3, 6, 9));
		Assert::AreEqual(22, f3(5, 10));
		Assert::AreEqual(29, f3(20));
		Assert::AreEqual(10, f3());
	}

	/*TEST_METHOD(test_4)
	{
		Assert::AreEqual("int", f4(55).c_str());
		Assert::AreEqual("bool", f4(true).c_str());
		Assert::AreEqual("double", f4(1.25).c_str());
	}

	TEST_METHOD(test_5)
	{
		std::string s = "root";
		Assert::IsFalse(f5(s, -50));
		Assert::IsFalse(f5(s, -1));
		Assert::IsFalse(f5(s, 0));
		Assert::AreEqual("root", s.c_str());
		Assert::IsTrue(f5(s, 1));
		Assert::AreEqual("root1", s.c_str());
		Assert::IsTrue(f5(s, 3));
		Assert::AreEqual("root13", s.c_str());
		Assert::IsTrue(f5(s, 125));
		Assert::AreEqual("root135", s.c_str());
		Assert::IsTrue(f5(s, 47));
		Assert::AreEqual("root1357", s.c_str());
	}

	TEST_METHOD(test_6)
	{
		{
			std::stringstream ss;
			f6(10, 20, ss);
			Assert::AreEqual("10\n20", ss.str().c_str());
		}
		{
			std::stringstream ss;
			f6(-8, 18, ss);
			Assert::AreEqual("-8\n18", ss.str().c_str());
		}
	}*/
};

} // namespace
