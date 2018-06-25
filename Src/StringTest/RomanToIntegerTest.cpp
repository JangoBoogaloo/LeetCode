#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "..\String\RomanToInteger.h"

namespace StringTest
{
	TEST_CLASS(RomanToIntegerTest)
	{
  private:
    RomanToInteger romanToInteger;
    string inputData;
    int expectedOutputData;
    int actualOutputData;
	public:
		
    TEST_METHOD(romanToInt)
		{
      inputData = "I";
      expectedOutputData = 1;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());
      inputData = "II";
      expectedOutputData = 2;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());
      
      inputData = "III";
      expectedOutputData = 3;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());

      inputData = "V";
      expectedOutputData = 5;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());
      inputData = "IV";
      expectedOutputData = 4;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());
      inputData = "VI";
      expectedOutputData = 6;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());

      inputData = "X";
      expectedOutputData = 10;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());
      inputData = "IX";
      expectedOutputData = 9;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());
      inputData = "XI";
      expectedOutputData = 11;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());

      inputData = "L";
      expectedOutputData = 50;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());

      inputData = "XL";
      expectedOutputData = 40;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());

      inputData = "LX";
      expectedOutputData = 60;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());

      inputData = "XL";
      expectedOutputData = 40;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());

      inputData = "MCMXCIV";
      expectedOutputData = 1994;
      actualOutputData = romanToInteger.romanToInt(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData, L"", LINE_INFO());
		}

	};
}