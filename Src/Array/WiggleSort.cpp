#include "stdafx.h"
#include "WiggleSort.h"


WiggleSort::WiggleSort()
{
}


WiggleSort::~WiggleSort()
{
}

void WiggleSort::wiggleSort(vector<int>& nums)
{
  int count = nums.size() - 1;
  for (int i = 0; i < count; i++) {
    if (i % 2 == 0 && nums[i] > nums[i+1]) {
      swap(nums[i], nums[i + 1]);
    }
    if (i % 2 != 0 && nums[i] < nums[i + 1]) {
      swap(nums[i], nums[i + 1]);
    }
  }
}
