#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "..\Array\WiggleSort.h"

namespace ArrayTest
{
	TEST_CLASS(WiggleSortTest)
	{
  private:
    WiggleSort wiggleSortObj;
    vector<int> inputData;
	public:
		
    TEST_METHOD(wiggleSort)
		{
      //inputData = { 3, 5, 2, 1, 6, 4 };
      inputData = { };
      wiggleSortObj.wiggleSort(inputData);
      int count = inputData.size() - 1;
      for (int i = 0; i < count - 1; i += 2)
      {
        Assert::IsTrue(inputData[i] <= inputData[i+1]);
      }
      for (int i = 1; i < count - 1; i += 2)
      {
        Assert::IsTrue(inputData[i] >= inputData[i + 1]);
      }

      inputData = { 3, 5, 2, 1, 6, 4 };
      wiggleSortObj.wiggleSort(inputData);
      count = inputData.size() - 1;
      for (int i = 0; i < count - 1; i += 2)
      {
        Assert::IsTrue(inputData[i] <= inputData[i + 1]);
      }
      for (int i = 1; i < count - 1; i += 2)
      {
        Assert::IsTrue(inputData[i] >= inputData[i + 1]);
      }

      inputData = { 2, 1 };
      wiggleSortObj.wiggleSort(inputData);
      count = inputData.size() - 1;
      for (int i = 0; i < count - 1; i += 2)
      {
        Assert::IsTrue(inputData[i] <= inputData[i + 1]);
      }
      for (int i = 1; i < count - 1; i += 2)
      {
        Assert::IsTrue(inputData[i] >= inputData[i + 1]);
      }
		}

	};
}