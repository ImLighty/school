#include <iostream>

#define MAX 100

using namespace std;

struct teacher
{
  char first_name[MAX+1], last_name[MAX+1], fiscal_code[MAX+1];
  char subject[MAX+1];
  bool does_have_degree;
  int age_of_service, age;
};

int main()
{
  teacher t;
  cout << "Insert first name: ";
  cin.getline(t.first_name, MAX+1);
  cout << "Insert last name: ";
  cin.getline(t.last_name, MAX+1);
  cout << "Insert fiscal code: ";
  cin.getline(t.fiscal_code, MAX+1);
  cout << "Insert subject: ";
  cin.getline(t.subject, MAX+1);
  cout << "Insert whethever if does have a degree or not (1/0): ";
  cin >> t.does_have_degree;
  cout << "Insert age of service: ";
  cin >> t.age_of_service;
  cout << "Insert age: ";
  cin >> t.age;

  cout << "First name: " << t.first_name << endl;
  cout << "Last name: " << t.last_name << endl;
  cout << "Fiscal code: " << t.fiscal_code << endl;
  cout << "Subject: " << t.subject << endl;
  cout << "Does have degree? " << t.does_have_degree << endl;
  cout << "Age of service: " << t.age_of_service << endl;
  cout << "Age: " << t.age << endl;

  return 0;
}