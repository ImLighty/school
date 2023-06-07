#include <iostream>

using namespace std;

void inserimento(int num1[], int dim)
{
    cout << "Inserisci l'array: ";
    for (int i = 0; i < dim; i++)
    {
        cin >> num1[i];
    }
}

char *ciao()
{
    return "Ciao mondo";
}

int main()
{
    int dim;
    cout << "Inserisci la dimensione dell'array: ";
    cin >> dim;

    int ar[dim];

    inserimento(ar, dim);

    for (int i = 0; i < dim; i++)
        cout << "Indirizzo " << i + 1 << ": " << &ar[i] << endl;
    cout << "Quì visse... ";
    int *p;
    p = ar;
    cout << ciao() << endl;
    cout << *(p + 1) << endl;
}