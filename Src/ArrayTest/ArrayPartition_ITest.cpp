#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "..\Array\ArrayPartition_I.h"

namespace ArrayTest
{
	TEST_CLASS(ArrayPartition_ITest)
	{
  private:
    ArrayPartition_I arrayPartition_I;
    vector<int> inputData;
    int expectOutputData;
    int actualOutputData;
	public:
		
    TEST_METHOD(arrayPairSum)
		{
			// TODO: Your test code here

      inputData = {1,4,3,2};
      expectOutputData = 4;
      actualOutputData = arrayPartition_I.arrayPairSum(inputData);
      Assert::IsTrue(expectOutputData == actualOutputData);
		}

	};
}