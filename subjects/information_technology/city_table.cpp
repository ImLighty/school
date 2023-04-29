#include <iostream>
#include <cstring>

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

int main()
{
  int n;
  cout << "How many cities do you wish to process? "; cin >> n;
  City cities[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Getting information about city n." << i+1 << "..." << endl;
    promptCity(cities[i]);
    populationIncrease(cities[i]);
  }
  for (int i = 0; i < n; i++) {
    showCity(cities[i]);
    cout << cities[i].name << "'s population " << (populationIncrease(cities[i]) ? "increased" : "decreased") << endl;
  }
}