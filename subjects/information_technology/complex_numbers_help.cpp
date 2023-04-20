#include <iostream>

using namespace std;

int main()
{
  int exponent, remainder;
  while (exponent != 0)
  {
    cout << "What's i's exponent? ";
    cin >> exponent;
    if (!(exponent <= 0))
    {
      remainder = exponent % 4;
      cout << "The result is: ";
      if (remainder == 0)
        cout << "i^" << exponent << " = 1" << endl;
      else if (remainder == 1)
        cout << "i^" << exponent << " = i" << endl;
      else if (remainder == 2)
        cout << "i^" << exponent << " = -1" << endl;
      else if (remainder == 3)
        cout << "i^" << exponent << " = -i" << endl;
    }
  }
}