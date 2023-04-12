#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    string binary = "";
    cout << "Enter a number: ";
    cin >> number;
    while (number > 0)
    {
        if (number % 2 == 0)
        {
            binary = "0" + binary;
        }
        else
        {
            binary = "1" + binary;
        }
        number = number / 2;
    }
    cout << "The binary number is: " << binary << endl;
    return 0;
}