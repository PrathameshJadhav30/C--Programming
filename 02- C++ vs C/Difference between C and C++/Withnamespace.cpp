#include<iostream>
using namespace std;
namespace Prep1  //first namespace
{
    int a = 1;
}
namespace Prep2  //2nd namespace
{
    int a = 2; //same name but different namespace
}
int main()
{
    cout << Prep1::a;
    cout << Prep2::a;
  
    return 0;
}