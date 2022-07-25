//Write a program to find the area of rectangle
#include <stdio.h>

int main ()
{
  int length;
  int width;
  float area;

  printf ("Enter the length");
  scanf ("%d", &length);
  printf ("Enter the width");
  scanf ("%d", &width);
  area = length * width;
  printf ("The area of rectangle is %f", area);
  return 0;
}

