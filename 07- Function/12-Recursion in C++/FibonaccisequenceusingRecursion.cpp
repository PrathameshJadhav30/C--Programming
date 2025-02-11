#include <iostream>
using namespace std;

int fibonacci(int n)
{
  if (n <= 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fibonacci (n - 1) + fibonacci (n - 2);
}

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  int result = fibonacci(num);
  cout << "The " << num << "th number in the Fibonacci sequence is " << result << endl;

  return 0;
}