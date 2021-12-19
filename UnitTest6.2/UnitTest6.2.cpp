#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.2-1/Lab-6.2-1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int a[n] = { 15,875,0,-55,-500 };

			int ave = -500;

			int expectedave = -500;

			(a, n, ave);

			Assert::AreEqual(expectedave, ave);
		}
	};
}
