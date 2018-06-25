#include "stdafx.h"
#include "ReverseString.h"


ReverseString::ReverseString()
{
}

ReverseString::~ReverseString()
{
}

string ReverseString::reverseString(string s)
{
  int size = s.size();
  for (int i = 0; i < (size / 2); i++) {
    swap(s[i], s[(size-1)-i]);
  }
  return s;
}