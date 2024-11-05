#include "pch.h"
#include "CppUnitTest.h"
#define MAX(y, z) ((y) > (z) ? (y) : (z)) // якщо умова ≥стинна то повертаЇтьс€ вираз_1; €кщо хибна то оператор повертаЇ вираз_2.

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(5, MAX(3, 5));
		}
	};
}
