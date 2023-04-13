#include <iostream>

#define RC 2

using namespace std;

int main() { int m[RC][RC], biggest = -1; cout << "Type your matrix:" << endl; for (int i = 0; i < RC; i++) for (int j = 0; j < RC; j++) { cin >> m[i][j]; if (i == 0 && j == 0) biggest = m[i][j]; else if (m[i][j] > biggest) biggest = m[i][j]; } cout << "The biggest number of this matrix is " << biggest << endl; }