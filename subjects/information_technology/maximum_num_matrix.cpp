#include <iostream>
int main() { int m[2][2], biggest = -1; std::cout << "Type your matrix:" << std::endl; for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) { std::cin >> m[i][j]; if (i == 0 && j == 0) biggest = m[i][j]; else if (m[i][j] > biggest) biggest = m[i][j]; } std::cout << "The biggest number of this matrix is " << biggest << std::endl; }