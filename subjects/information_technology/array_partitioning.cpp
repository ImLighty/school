#include <iostream>

#define N 10

using namespace std;

void askNumbers(int v[], int dim)
{
  cout << "Type " << dim << " numers separated by the space, then press ENTER -> ";
  for (int i = 0; i < dim; i++) cin >> v[i];
}

void partitionArray(int numbers[], int dim, int x)
{
  int biggerThanX[dim], smallerThanX[dim], smaller = 0, bigger = 0;
  for (int i = 0; i < dim; i++)
  {
    if (numbers[i] >= x)
    {
      biggerThanX[bigger] = numbers[i];
      bigger++;
    }
    else
    {
      smallerThanX[smaller] = numbers[i];
      smaller++;
    }
  }
  for (int i = 0; i < smaller; i++)
    numbers[i] = smallerThanX[i];
  for (int i = smaller; i < dim; i++)
    numbers[i] = biggerThanX[i];
}

void showNumbers(int v[], int dim)
{
  cout << "Numbers: ";
  for (int i = 0; i < dim; i++) cout << v[i] << " ";
  cout << endl;
}

int main()
{
  int x, numbers[N];
  cout << "Type an X number -> ";
  cin >> x;
  askNumbers(numbers, N);
  partitionArray(numbers, N, x);
  showNumbers(numbers, N);
}