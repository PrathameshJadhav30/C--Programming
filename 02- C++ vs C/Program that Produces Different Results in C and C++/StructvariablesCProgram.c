#include<stdio.h>
int AB;
int main()
{
    struct AB  // In C++, this AB hides the global variable AB, 
  {           // but not in C
    double y;
  };  
                             
    printf("sizeof(AB) =  %d", sizeof(AB));

    return 0;
}