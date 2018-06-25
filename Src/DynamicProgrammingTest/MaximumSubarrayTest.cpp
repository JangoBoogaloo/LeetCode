#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "..\DynamicProgramming\MaximumSubarray.h"

namespace DynamicProgrammingTest
{		
	TEST_CLASS(MaximumSubarrayTest)
	{

  private:
    MaximumSubarray maximumSubarray;
    vector<int> inputData;
    int expectedOutputData;
    int actualOutputData;
	public:
		
    TEST_METHOD(maxSubArray)
		{
      inputData = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
      expectedOutputData = 6;
      actualOutputData = maximumSubarray.maxSubArray(inputData);
      Assert::IsTrue(expectedOutputData == actualOutputData);
		}

	};
}