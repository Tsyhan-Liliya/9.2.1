#include "pch.h"
#include "CppUnitTest.h"
#define MAX(y, z) ((y) > (z) ? (y) : (z)) // ���� ����� ������� �� ����������� �����_1; ���� ����� �� �������� ������� �����_2.

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
