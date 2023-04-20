#include <iostream>
#include <cstring>
#include <cctype>

#define N 50
using namespace std;

int main()
{
  char s1[N + 1] = "Information technology", s2[N + 1], c;
  int result;

  strcpy(s2, s1);

  cout << "s1 = \"" << s1 << "\"" << endl;
  cout << "s2 = \"" << s2 << "\"" << endl;

  cout << "Enter two strings..." << endl;
  cin.getline(s1, N + 1);
  cin.getline(s2, N + 1);

  result = strcmp(s1, s2);
  if (result == 0)
  {
    cout << "Both strings are the same" << endl;
  }
  else
  {
    if (result < 0)
      cout << "s1 is LESS than s2" << endl;
    else
      cout << "s1 is BIGGER than s2" << endl;
  }
  cout << "Enter a character to search in s1...";
  cin >> c;
  if (strchr(s1, c) != NULL)
    cout << "Character found!" << endl;
  else
    cout << "Character not found" << endl;
  
  
  if (isdigit(s1[2]) != 0)
    cout << "Third character in s1 is a digit" << endl;
  else
    cout << "Third character in s1 is not a digit" << endl;
  if (isupper(s1[0]) != 0)
    cout << "First character in s1 is an uppercase letter" << endl;
  else
    cout << "First character in s1 is not an uppercase letter" << endl;
  s2[1] = toupper(s2[1]);
  cout << "s2 = \"" << s2 << "\"" << endl;
  for (int i = 0; i < strlen(s1); i++)
    s1[i] = toupper(s1[i]);
  cout << "s1 = \"" << s1 << "\"" << endl;
}
