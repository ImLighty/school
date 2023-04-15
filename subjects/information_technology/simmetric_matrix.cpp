#include <iostream>

#define N 3

using namespace std;

int main()
{
  int matrix[N][N];

  cout << "Insert your matrix: " << endl;
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      cin >> matrix[i][j];
  
  bool simmetric = true;
  
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      if (matrix[i][j] != matrix[j][i])
        simmetric = false;
  
  if (simmetric)
    cout << "The matrix is simmetric" << endl;
  else
    cout << "The matrix is not simmetric" << endl;
}