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

void bubbleSortCities(City v[], int dim)
{
  City swap;
  for (int steps = 0; steps < dim - 1; steps++)
  {
    for (int i = 0; i < dim - 1; i++)
    {
      if (v[i].increase > v[i + 1].increase)
      {
        swap = v[i];
        v[i] = v[i + 1];
        v[i + 1] = swap;
      }
    }
  }
}

void promptCity(City &city)
{
  cout << "What's the city's name? "; cin >> city.name;
  cout << "What's " << city.name << "'s current population? "; cin >> city.population;
  cout << "What's " << city.name << "'s last year population? "; cin >> city.populationLastYear;
}

void showCity(City city)
{
  cout << city.name << "\t" << city.population << "\t" << city.populationLastYear << "\t" << city.increase << "\t" << city.increasePercentage << endl;
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
  bubbleSortCities(cities, n);
  cout << "Name\tPopulation\tPopulation last year\tIncrease\tIncrease percentage" << endl;
  for (int i = 0; i < n; i++)
    showCity(cities[i]);
}