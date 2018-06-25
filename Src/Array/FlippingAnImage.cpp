#include "stdafx.h"
#include "FlippingAnImage.h"


FlippingAnImage::FlippingAnImage()
{
}


FlippingAnImage::~FlippingAnImage()
{
}

vector<vector<int>> FlippingAnImage::flipAndInvertImage(vector<vector<int>>& A)
{
  for (size_t i = 0; i < A.capacity(); i++) {
    reverse(A[i].begin(), A[i].end());
    for (size_t j = 0; j < A[i].capacity(); j++) {
      A[i][j] = (A[i][j] == 0) ? 1 : 0;
    }
  }
  return A;
}