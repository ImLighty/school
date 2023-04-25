#include <iostream>
#include <cstring>

#define MAX 100

using namespace std;

struct Teacher
{
  char firstName[MAX+1], lastName[MAX+1], fiscalCode[MAX+1];
  char subject[MAX+1];
  bool doesHaveDegree;
  int ageOfService, age;
};

int main()
{
  Teacher t;
  strcpy(t.firstName, "John"); // strcpy(dest, src)
  strcpy(t.lastName, "Doe");
  strcpy(t.fiscalCode, "ABCDEF12G34H567I");
  strcpy(t.subject, "Math");
  t.doesHaveDegree = true;
  t.ageOfService = 10;
  t.age = 30;

  cout << "First name: " << t.firstName << endl;
  cout << "Last name: " << t.lastName << endl;
  cout << "Fiscal code: " << t.fiscalCode << endl;
  cout << "Subject: " << t.subject << endl;
  cout << "Does have degree? " << t.doesHaveDegree << endl;
  cout << "Age of service: " << t.ageOfService << endl;
  cout << "Age: " << t.age << endl;

  return 0;
}