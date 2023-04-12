#include <iostream>
#include <cstdlib>
#include <ctime>

#define RC1 2
#define RC2 3

using namespace std;

int main()
{
  double matrix1[RC1][RC1];
  int matrix2[RC2][RC2];

  srand(time(NULL));

  cout << "First matrix: " << endl;
  for (int i = 0; i < RC1; i++)
  {
    for (int j = 0; j < RC1; j++)
    {
      matrix1[i][j] = rand() % 11;
      cout << matrix1[i][j] << "\t";
    }
    cout << endl;
  }

  cout << "Determinant of first matrix: ";
  cout << matrix1[0][0] * matrix1[1][1] - matrix1[0][1] * matrix1[1][0] << endl;

  cout << "Second matrix: " << endl;
  for (int i = 0; i < RC2; i++)
  {
    for (int j = 0; j < RC2; j++)
    {
      matrix2[i][j] = rand() % 11;
      cout << matrix2[i][j] << "\t";
    }
    cout << endl;
  }

  cout << "Determinant of second matrix: ";
  cout << matrix2[0][0] * matrix2[1][1] * matrix2[2][2] + matrix2[0][1] * matrix2[1][2] * matrix2[2][0] + matrix2[0][2] * matrix2[1][0] * matrix2[2][1] - matrix2[0][2] * matrix2[1][1] * matrix2[2][0] - matrix2[0][1] * matrix2[1][0] * matrix2[2][2] - matrix2[0][0] * matrix2[1][2] * matrix2[2][1] << endl;
}