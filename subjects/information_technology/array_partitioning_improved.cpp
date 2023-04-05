#include <iostream>

#define N 10

using namespace std;

void askNumbers(int v[], int dim)
{
  cout << "Type " << dim << " numbers separated by the space, then press ENTER -> ";
  for (int i = 0; i < dim; i++) cin >> v[i];
}

void swap(int &a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

void partitionArray(int numbers[], int left, int right, int dim, int x)
{
  while (left < right)
  {
    if (numbers[left] > x)
    {
      while (!(numbers[right] < x))
        right--;
      if (left < right)
        swap(numbers[left], numbers[right]);
    }
    else if (numbers[right] < x)
    {
      while (numbers[left] <= x)
        left++;
      if (left < right)
        swap(numbers[left], numbers[right]);
    }
    left++;
    right--;
  }
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
  partitionArray(numbers, N, 0, N - 1, x);
  showNumbers(numbers, N);
}