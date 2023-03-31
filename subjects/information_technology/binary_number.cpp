#include <iostream>

using namespace std;

int main()
{
  int decimal_num, quotient, remainder;
  cout << "Type a decimal number -> ";
  cin >> decimal_num;

  quotient = decimal_num;
  while (quotient > 0)
  {
    remainder = quotient % 2;
    quotient /= 2;
    cout << quotient;
  }
  cout << endl;
  
}