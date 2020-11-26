#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = (h(2. * 2, 2. * 2) + pow(h(2. + 2, 1), 2)) / (1 + pow(h(2. * 2, 2), 2));
			Assert::AreEqual(t, 0,115865);
		}
	};
}
