#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1_char/Lab8.1_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82ITER
{
    TEST_CLASS(UnitTest82ITER)
    {
    public:

        TEST_METHOD(TestFindThirdCommaIndex)
        {
            Assert::AreEqual(FindThirdCommaIndex("a,b,c,d"), 5);
            Assert::AreEqual(FindThirdCommaIndex("a,b,c"), -1);
            Assert::AreEqual(FindThirdCommaIndex(",,,"), 2);
        }
    };
}
