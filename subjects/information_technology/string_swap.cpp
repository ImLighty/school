#include <iostream>
#include <cstring>

#define N 20

using namespace std;


void strswp(char first[], char second[])
{
  if (strlen(first) > strlen(second))
  {
    char temp[strlen(first)+1];
    strcpy(temp, first);
    strcpy(first, second);
    strcpy(second, temp);
  }
  else
  {
    char temp[strlen(second)+1];
    strcpy(temp, second);
    strcpy(second, first);
    strcpy(first, temp);
  }
}

int main()
{
  char first[N+1], second[N+1];
  cout << "Enter first string: ";
  cin.getline(first, N);
  cout << "Enter second string: ";
  cin.getline(second, N);
  strswp(first, second);
  cout << "First string: " << first << endl;
  cout << "Second string: " << second << endl;
}