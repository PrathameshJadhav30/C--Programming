#include <stdio.h>

int main()
{
  int x = 5;
  double* d_ptr = (double *) &x;
  
  printf ("x = %f\n", *d_ptr);
  
  return 0;
}