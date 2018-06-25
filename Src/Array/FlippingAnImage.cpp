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
  for (vector<int> & row : A) {
    for (int col = 0; col < (row.size()+1) / 2; col++) {
      int tmp = 1- row[col];
      row[col] = 1 - row[row.size() - 1 - col];
      row[row.size() - 1 - col] = tmp;
    }
  }
  return A;
}