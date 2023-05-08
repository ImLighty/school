#include <iostream>
#include <cstring>
#include <cctype>

#define MAX_STR 256

using namespace std;

void tolowerStr(char dest[], char src[], int dim)
{
  strcpy(dest, src);
  for (int i = 0; i < dim; i++)
    dest[i] = tolower(dest[i]);
}

int main()
{
  char s1[MAX_STR], s2[MAX_STR], unsensitiveS1[MAX_STR], unsensitiveS2[MAX_STR];
  cout << "Type the first string -> ";
  cin.getline(s1, MAX_STR);
  cout << "Type the second string -> ";
  cin.getline(s2, MAX_STR);
  int cmp = 0;
  tolowerStr(unsensitiveS1, s1, MAX_STR);
  tolowerStr(unsensitiveS2, s2, MAX_STR);
  for (int i = 0; i < strlen(unsensitiveS1); i++)
  {
    for (int j = 0; j < strlen(unsensitiveS2); j++)
    {
      if (unsensitiveS1[i] == unsensitiveS2[j])
      {
        cmp++;
        unsensitiveS2[j] = ' ';
        break;
      }
    }
  }
  cout << cmp << " characters are in common." << endl;
}