#pragma warning(disable:4996)
#include<stdio.h>
float getmax(float a, float b, float c)
{
  float max;
  if (a>b)
    max = a;
  else
    max = b;

  if (c>max)
    max = c;
  else
    continue;

  return max;
}
