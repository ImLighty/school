#include <iostream>
#include <cmath>

#define N 6
#define CATHETUS1 0
#define CATHETUS2 1
#define HYPOTENUSE 2
#define ALPHA 3
#define BETA 4
#define GAMMA 5

using namespace std;

double calcCathetus2(double triangle[], int dim, int posCathetus1, int posBeta)
{
  return tan(triangle[posBeta] * M_PI / 180) * triangle[posCathetus1];
}

double calcHypotenuseCathetus(double triangle[], int dim, int posCathetus1, int posCathetus2)
{
  return sqrt(pow(triangle[posCathetus1], 2) + pow(triangle[posCathetus2], 2));
}

double calcGammaRect(double triangle[], int dim, int posAlpha, int posBeta)
{
  return triangle[posAlpha] - triangle[posBeta];
}

int main()
{
  double triangle[N];
  cout << "Type the first cathetus length -> ";
  cin >> triangle[CATHETUS1];
  cout << "Type the corner between the first cathetus and the hypotenuse (a.k.a. BETA) -> ";
  cin >> triangle[BETA];
  triangle[CATHETUS2] = calcCathetus2(triangle, N, CATHETUS1, BETA);
  triangle[ALPHA] = 90;
  triangle[GAMMA] = calcGammaRect(triangle, N, ALPHA, BETA);
  triangle[HYPOTENUSE] = calcHypotenuseCathetus(triangle, N, CATHETUS1, CATHETUS2);
  cout << "Cathetus 1 (a): " << triangle[CATHETUS1] << " | Cathetus 2 (b): " << triangle[CATHETUS2] << " | Hypotenuse (c): " << triangle[HYPOTENUSE] << endl;
  cout << "Alpha: " << triangle[ALPHA] << "° | Beta: " << triangle[BETA] << "° | Gamma: " << triangle[GAMMA] << "°" << endl;
  return 0;
}