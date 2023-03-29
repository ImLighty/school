#include <iostream>
#include <ctime>
#include <cstdlib>

#define N 10

using namespace std;

void show_array(int v[], int dim)
{
  for (int i = 0; i < dim; i++) cout << v[i] << " ";
  cout << endl;
}

void bubble_sort(int v[], int dim)
{
  int swap;
  for (int steps = 0; steps < dim - 1; steps++)
  {
    for (int i = 0; i < dim - 1; i++)
    {
      if (v[i] > v[i + 1])
      {
        swap = v[i];
        v[i] = v[i + 1];
        v[i + 1] = swap;
      }
    }
  }
  show_array(v, dim);
}

int main()
{
  int v[N];
  srand(time(NULL));
  for (int i = 0; i < N; i++)
    v[i] = rand() % 101;
  show_array(v, N);
  cout << "Running the bubble sort algorithm..." << endl;
  bubble_sort(v, N);
}