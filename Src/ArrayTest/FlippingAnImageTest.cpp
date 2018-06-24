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
	public:
		
		TEST_METHOD(BasicCaseTest)
    {
      vector<vector<int>> inputData = 
      { 
        { 1, 1, 0 }, 
        { 1, 0, 1 }, 
        { 0, 0, 0 } 
      };
      vector<vector<int>> correctOutputData = 
      {
        { 1, 0, 0 },
        { 0, 1, 0 },
        { 1, 1, 1 }
      };
      vector<vector<int>> outputData = flippingAnImage.flipAndInvertImage(inputData);
      Assert::IsTrue(correctOutputData == outputData, L"Result not matched", LINE_INFO());
		}

	};
}