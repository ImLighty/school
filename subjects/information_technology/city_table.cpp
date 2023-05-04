#include <iostream>
#include <cstring>
#include <cctype>

#define MAX_CHARS 50

using namespace std;

struct City
{
  char name[MAX_CHARS + 1];
  int population, populationLastYear, increase;
  double increasePercentage;
};

void promptCity(City &city)
{
  cout << "What's the city's name? "; cin >> city.name;
  cout << "What's " << city.name << "'s current population? "; cin >> city.population;
  cout << "What's " << city.name << "'s last year population? "; cin >> city.populationLastYear;
}

void showCity(City city)
{
  cout << "City: " << city.name << endl;
  cout << "Population: " << city.population << endl;
  cout << "Population last year: " << city.populationLastYear << endl;
  cout << "Population increase: " << city.increase << endl;
  cout << "Population increase percentage: " << city.increasePercentage << "%" << endl;
}

bool populationIncrease(City &city)
{
  city.increase = city.population - city.populationLastYear;
  city.increasePercentage = (city.increase / city.populationLastYear) * 100;
  return city.increase > 0;
}

void lowerString(char dest[], char src[], int dim)
{
  strcpy(dest, src);
  for (int i = 0; i < dim; i++)
    dest[i] = tolower(dest[i]);
}

int main()
{
  int n;
  cout << "How many cities do you wish to process? "; cin >> n;
  City cities[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Getting information about city n." << i + 1 << "..." << endl;
    promptCity(cities[i]);
    populationIncrease(cities[i]);
  }
  char cityName[MAX_CHARS + 1];
  cout << "What city do you want to find? "; cin >> cityName;
  for (int i = 0; i < n; i++)
  {
    char unsensitiveInput[MAX_CHARS + 1], unsensitiveCity[MAX_CHARS + 1];
    lowerString(unsensitiveInput, cityName, MAX_CHARS + 1);
    lowerString(unsensitiveCity, cities[i].name, MAX_CHARS + 1);
    if (strcmp(unsensitiveInput, unsensitiveCity) == 0)
    {
      showCity(cities[i]);
      break;
    }
  }
}