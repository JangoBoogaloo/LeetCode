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
  reverse(s.begin(), s.end());
  return s;
}