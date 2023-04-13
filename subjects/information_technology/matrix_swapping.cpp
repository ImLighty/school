#include <iostream>

#define N 4
#define M 4

using namespace std;

int main()
{
  float mat[N][M], temp;
  int i, j;

  cout << "Type your matrix:" << endl;
  for (i = 0; i < N; i++)
    for (j = 0; j < M; j++)
      cin >> mat[i][j];

  for (i = 0; i < N; i += 2)
  {
    for (j = 0; j < M; j++)
    {
      temp = mat[i][j];
      mat[i][j] = mat[i + 1][j];
      mat[i + 1][j] = temp;
    }
  }

  cout << "Here's the final result:" << endl;
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < M; j++)
    {
      cout << mat[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}