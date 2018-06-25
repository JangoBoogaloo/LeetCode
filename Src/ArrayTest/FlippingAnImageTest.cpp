#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "..\Array\FlippingAnImage.h"

namespace ArrayTest
{
	TEST_CLASS(FlippingAnImageTest)
	{
  private:
    FlippingAnImage flippingAnImage;
    vector<vector<int>> inputData;
    vector<vector<int>> correctOutputData;
    vector<vector<int>> outputData;
	public:
		
		TEST_METHOD(BasicCaseTest)
    {
      inputData = 
      { 
        { 1, 1, 0 }, 
        { 1, 0, 1 }, 
        { 0, 0, 0 } 
      };
      correctOutputData = 
      {
        { 1, 0, 0 },
        { 0, 1, 0 },
        { 1, 1, 1 }
      };
      outputData = flippingAnImage.flipAndInvertImage(inputData);
      Assert::IsTrue(correctOutputData == outputData, L"Result not matched", LINE_INFO());

      inputData =
      {
        { 0, 1, 0 },
        { 0, 0, 1 },
        { 0, 1, 1 }
      };
      correctOutputData =
      {
        { 1, 0, 1 },
        { 0, 1, 1 },
        { 0, 0, 1 }
      };
      outputData = flippingAnImage.flipAndInvertImage(inputData);
      Assert::IsTrue(correctOutputData == outputData, L"Result not matched", LINE_INFO());
		}

	};
}