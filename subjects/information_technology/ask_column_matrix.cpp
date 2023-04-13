#include <iostream>

#define R 3
#define C 4

using namespace std;

int main()
{
  int matrix[R][C], n;

  cout << "Type a number -> ";
  cin >> n;

  for (int i = 0; i < C; i++) {
    for (int j = 0; j < R; j++)
    {
      matrix[j][i] = n;
      n++;
    }
  }

  cout << "Here's your matrix:" << endl;

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++)
      cout << matrix[i][j] << "\t";
    cout << endl;
  }
}