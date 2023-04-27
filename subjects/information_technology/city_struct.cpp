#include <iostream>

#define MAX 100

using namespace std;

struct City
{
    char name[MAX + 1];
    int currentPopulation;
    int lastYearPopulation;
};

int main()
{
    City c;
    cout << "Insert city name: ";
    cin >> c.name;
    cout << "Insert current population: ";
    cin >> c.currentPopulation;
    cout << "Insert last year population: ";
    cin >> c.lastYearPopulation;
    cout << "The increment of population is: " << c.currentPopulation - c.lastYearPopulation << endl;
    cout << "The increment of population is: " << (c.currentPopulation - c.lastYearPopulation) / c.lastYearPopulation * 100 << "%" << endl;
    return 0;
}
