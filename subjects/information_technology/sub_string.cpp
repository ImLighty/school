#include <iostream>
#include <cstring>

#define MAX_STR 100

using namespace std;

bool subString(char dest[], char src[], int p1, int p2)
{
  int j = 0;
  if (p1 < 0 || p2 < 0 || p1 > p2 || p2 > strlen(src) - 1)
    return false;
  for (int i = p1; i <= p2; i++)
  {
    dest[j] = src[i];
    j++;
  }
  return true;
}

int main()
{
  char src[MAX_STR], dest[MAX_STR];
  cout << "Enter a string: ";
  cin.getline(src, MAX_STR);
  int p1, p2;
  cout << "Enter the starting position: ";
  cin >> p1;
  cout << "Enter the ending position: ";
  cin >> p2;
  if (subString(dest, src, p1, p2))
    cout << "The substring is: " << dest << endl;
  else
    cout << "Invalid positions" << endl;
}