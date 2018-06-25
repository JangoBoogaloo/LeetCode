#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "..\String\ReverseString.h"

namespace StringTest
{		
	TEST_CLASS(ReverseStringTest)
	{
  private:
    ReverseString reverseStringObj;
    string inputData;
    string expectedOutput;
    string actualOutput;

	public:
		
    TEST_METHOD(reverseString)
		{
      inputData = "abcd";
      expectedOutput = "dcba";
      actualOutput = reverseStringObj.reverseString(inputData);
      Assert::IsTrue(expectedOutput == actualOutput);

      inputData = "abc";
      expectedOutput = "cba";
      actualOutput = reverseStringObj.reverseString(inputData);
      Assert::IsTrue(expectedOutput == actualOutput);

      inputData = "a";
      expectedOutput = "a";
      actualOutput = reverseStringObj.reverseString(inputData);
      Assert::IsTrue(expectedOutput == actualOutput);

      inputData = "";
      expectedOutput = "";
      actualOutput = reverseStringObj.reverseString(inputData);
      Assert::IsTrue(expectedOutput == actualOutput);
		}

	};
}