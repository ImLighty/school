#include <iostream>
#include <cstring>

using namespace std;

#define STRING_MAX 50

int main()
{
  char first_name[STRING_MAX + 1], last_name[STRING_MAX + 1], complete_name[(STRING_MAX * 2) + 1];
  cout << "Q: What's your name?" << endl << "A: My name is ";
  cin.getline(first_name, STRING_MAX + 1);
  cout << "Q: What's your last name, " << first_name << "?" << endl << "A: My last name is ";
  cin.getline(last_name, STRING_MAX + 1);

  strcpy(complete_name, first_name);
  strcat(complete_name, " ");
  strcat(complete_name, last_name);

  cout << endl << "Nice to meet you, " << complete_name << "." << endl;
}