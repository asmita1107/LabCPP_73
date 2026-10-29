#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  try
  {
    if (n < 0)
       throw n;

       cout << "Number is positive";
    }
    catch (int x)
    {
     cout << "Negative number exception";
    }

   return 0;
}