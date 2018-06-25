#include "stdafx.h"
#include "ArrayPartition_I.h"
#include <algorithm>

ArrayPartition_I::ArrayPartition_I()
{
}


ArrayPartition_I::~ArrayPartition_I()
{
}

int ArrayPartition_I::arrayPairSum(vector<int>& nums)
{
  sort(nums.begin(), nums.end());
  int total = 0;

  for (int i = 0; i < nums.size(); i += 2) {
    total += min(nums[i], nums[i+1]);
  }
  return total;
}