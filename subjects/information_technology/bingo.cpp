#include <iostream>
#include <ctime>
#include <cstdlib>

#define N 90

using namespace std;

void show_array(int v[], int dim)
{
  for (int i = 0; i < dim; i++) cout << v[i] << " ";
  cout << endl;
}

int estrazione(int v[], int dim, int pos)
{
  if (pos < dim)
  {
    v[pos] = rand() % 100;
    return 0;
  } else return 1;
}

int main()
{
  int b[N], rand;
  for (int i = 0; i < N; i++) b[i] = i + 1;
  show_array(b, N);

  srand(time(NULL));

  char scelta;
  do {
    cout << "Vuoi estrarre un altro numero? (y/n) -> ";
    cin >> scelta;
  } while (scelta == 'n');
}