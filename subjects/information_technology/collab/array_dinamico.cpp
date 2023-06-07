#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int *c;
    int val;

    cout << "Quanto lungo vuoi l'array? ";
    cin >> val;

    c = (int*)malloc(val * sizeof(int));
    if (c == NULL) {
        cout << "Errore di allocazione!" << endl;
        exit(1);
    }

    cout << "Inserisci i valori separati dallo spazio: ";
    for (int i = 0; i < val; i++) cin >> c[i];

    cout << "Ecco i valori: ";
    for (int i = 0; i < val; i++) cout << c[i] << "\t";
    cout << endl;

    free(c);
}   
