#include <iostream>

#define R 2
#define C 3

using namespace std;

int main()
{
  int m1[R][C], m2[R][C];
  cout << "The two matrixes are " << R << "x" << C << endl;
  cout << "Enter the elements of the first matrix: " << endl;
  for (int i = 0; i < R; i++)
    for (int j = 0; j < C; j++)
      cin >> m1[i][j];

  cout << "Enter the elements of the second matrix: " << endl;
  for (int i = 0; i < R; i++)
    for (int j = 0; j < C; j++)
      cin >> m2[i][j];

  cout << "The sum of the two matrices is: " << endl;
  for (int i = 0; i < R; i++)
  {
    for (int j = 0; j < C; j++)
    {
      cout << m1[i][j] + m2[i][j] << " ";
    }
    cout << endl;
  }
}