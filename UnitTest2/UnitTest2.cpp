#include "pch.h"
#include "CppUnitTest.h"
#include "../1.1 norm/Combination.cpp"
#include "../1.1 norm/Combination.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Combination l;
			
			int p =l.Factorial(2);
			Assert::AreEqual(p, 2);
		}
	};
}
