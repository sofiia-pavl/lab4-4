#include "pch.h"
#include "CppUnitTest.h"
#include "../lab4-4/SortArray.h"
#include "C:\Users\Софія\source\repos\lab4-4\lab4-4\SortArray.cpp"
#include "C:\Users\Софія\source\repos\lab4-4\lab4-4\Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b = 2;
			SortArray a(b);
			Assert::AreEqual(b, a.GetSize());
		}
	};
}
