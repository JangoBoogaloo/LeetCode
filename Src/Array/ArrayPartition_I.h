#pragma once

#include "Array.h"
#include <vector>

using namespace std;

class ARRAY_API ArrayPartition_I
{
public:
	ArrayPartition_I();
	~ArrayPartition_I();
	int arrayPairSum(vector<int>& nums);
};