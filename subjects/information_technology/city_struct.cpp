#include <iostream>

#define MAX 100

using namespace std;

struct city
{
    char name[MAX + 1];
    int current_population;
    int last_year_population;
};

int main()
{
    city c;
    cout << "Insert city name: ";
    cin >> c.name;
    cout << "Insert current population: ";
    cin >> c.current_population;
    cout << "Insert last year population: ";
    cin >> c.last_year_population;
    cout << "The increment of population is: " << c.current_population - c.last_year_population << endl;
    cout << "The increment of population is: " << (c.current_population - c.last_year_population) / c.last_year_population * 100 << "%" << endl;
    return 0;
}