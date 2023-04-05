#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 10

using namespace std;

void askNumbers(int v[], int dim)
{
  cout << "Type " << dim << " numbers separated by the space, then press ENTER -> ";
  for (int i = 0; i < dim; i++) cin >> v[i];
}

void fillNumbers(int v[], int dim)
{
  for (int i = 0; i < dim; i++) v[i] = rand() % 101;
}

void showNumbers(int v[], int dim)
{
  cout << "Numbers: ";
  for (int i = 0; i < dim; i++) cout << v[i] << " ";
  cout << endl;
}

void swap(int &a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

void partitionArray(int numbers[], int left, int right, int dim, int x)
{
  while (numbers[left] < x)
    left++;
  while (numbers[right] >= x)
    right--;
  while (left < right)
  {
    int tmp = numbers[left];
    numbers[left] = numbers[right];
    numbers[right] = tmp;
    while (numbers[left] < x)
      left++;
    while (numbers[right] >= x)
      right--;
  }
}

int main()
{
  int x, numbers[N];
  cout << "Type an X number -> ";
  cin >> x;
  srand(time(NULL));
  fillNumbers(numbers, N);
  partitionArray(numbers, 0, N - 1, N, x);
  showNumbers(numbers, N);
}