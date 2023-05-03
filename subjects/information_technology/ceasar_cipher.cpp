#include <iostream>
#include <cstring>

#define MAX 2000

using namespace std;

void decrypt()
{
  char str[MAX];
  int key;
  cout << "Enter the string: ";
  cin.getline(str, MAX);
  cout << "Enter the key/shift: ";
  cin >> key;
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = (str[i] - 'a' + key) % 26 + 'a';
    else if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = (str[i] - 'A' + key) % 26 + 'A';
  }
  cout << "The encrypted string is: " << str << endl;
}

void encrypt()
{
  char str[MAX];
  int key;
  cout << "Enter the encrypted string: ";
  cin.getline(str, MAX);
  cout << "Enter the key/shift: ";
  cin >> key;
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = (str[i] - 'a' - key + 26) % 26 + 'a';
    else if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = (str[i] - 'A' - key + 26) % 26 + 'A';
  }
  cout << "The decrypted string is: " << str << endl;
}

void menu()
{
  int choice;
  cout << "Pick your choice:\n1. Encrypt\n2. Decrypt\n3. Exit\n-> ";
  cin >> choice;
  cin.ignore();
  switch (choice)
  {
  case 1:
    encrypt();
    break;
  case 2:
    decrypt();
    break;
  case 3:
    exit(0);
  default:
    cout << "ERROR!\n";
  }
}

int main()
{
  while (true)
    menu();
  return 0;
}