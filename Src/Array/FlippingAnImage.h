#pragma once

#include "Array.h"
#include <vector>

using namespace std;

class ARRAY_API FlippingAnImage
{
public:
  FlippingAnImage();
  ~FlippingAnImage();
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A);
};