#pragma once

#include "DynamicProgramming.h"

#include <vector>
using namespace std;

class DYNAMICPROGRAMMING_API MaximumSubarray
{
public:
  MaximumSubarray();
  ~MaximumSubarray();
  int maxSubArray(vector<int>& nums);
};

