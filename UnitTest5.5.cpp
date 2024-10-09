#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.5/lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = sum(271);
			Assert::AreEqual(c, 10, 0.0001);

		}
		TEST_METHOD(TestMethod2)
		{
			double q;
			q = countDigits(271);
			Assert::AreEqual(q, 3, 0.0001);

		}
		TEST_METHOD(TestMethod3)
		{
			double r;
			r = maxDigit(271);
			Assert::AreEqual(r, 7, 0.0001);

		}
		TEST_METHOD(TestMethod4)
		{
			double y;
			y = minDigit(271);
			Assert::AreEqual(y, 1, 0.0001);

		}
		TEST_METHOD(TestMethod5)
		{
	
			sum(271);

			Assert::AreEqual(maxDepth, 4, 0.0001);

		}
	};
}
