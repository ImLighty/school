#include <iostream>
#include <cstring>
#define N 100
#define M 15
#define AUTO_MAX 10
using namespace std;

struct Acquirente
{
  char cognome[N], nome[N];
};

struct Auto
{
  char marca[M];
  int cc;
  int anno;
  Acquirente acquirente;
};

void inserimento(Auto autosalone[], int dim);
void visualizza(Auto autosalone[], int dim, int immatricolazione);
void visualizzaIntestati(Auto autosalone[], int dim, char cognome[], char nome[]);

int main()
{
  // 1. Dichiarare l'array di struct
  Auto autosalone[AUTO_MAX];

  // 2. Chiamare la funzione di inserimento
  inserimento(autosalone, AUTO_MAX);

  // 3. Chiedere all'utente l'anno di immatricolazione
  int immatricolazione;
  cout << "Inserisci l'anno di immatricolazione del veicolo: ";
  cin >> immatricolazione;

  // 4. Visualizzare i veicoli in base all'immatricolazione
  visualizza(autosalone, AUTO_MAX, immatricolazione);

  // 5. Chiedere nome e cognome all'utente e visualizzare tutte le auto intestate
  char nome[N], cognome[N];
  cout << "Inserisci il cognome: ";
  cin.getline(cognome, N);
  cout << "Inserisci il nome: ";
  cin.getline(nome, N);
  visualizzaIntestati(autosalone, AUTO_MAX, cognome, nome);
}

void inserimento(Auto autosalone[], int dim)
{
  for (int i = 0; i < dim; i++)
  {
    cout << "Di che marca è il veicolo? ";
    cin.getline(autosalone[i].marca, M);
    cout << "Di quanta cilindrata dispone il veicolo? ";
    cin >> autosalone[i].cc;
    cout << "Di che anno è il veicolo? ";
    cin >> autosalone[i].anno;
    cout << "Qual'è il cognome dell'acquirente? ";
    cin.getline(autosalone[i].acquirente.cognome, N);
    cout << "Qual'è il nome dell'acquirente? ";
    cin.getline(autosalone[i].acquirente.nome, N);
  }
}

void visualizza(Auto autosalone[], int dim, int immatricolazione)
{
  for (int i = 0; i < dim; i++)
    if (autosalone[i].cc > 1500 && autosalone[i].anno == immatricolazione)
    {
      cout << "Marca: " << autosalone[i].marca << endl;
      cout << "Anno: " << autosalone[i].anno << endl;
      cout << "Cilindrata: " << autosalone[i].cc << endl;
      cout << "Cognome: " << autosalone[i].acquirente.cognome << endl;
    }
}

void visualizzaIntestati(Auto autosalone[], int dim, char cognome[], char nome[])
{
  cout << "Ecco tutte le auto intestate a " << cognome << " " << nome << ": " << endl;
  for (int i = 0; i < dim; i++)
    if (strcmp(autosalone[i].acquirente.cognome, cognome) == 0 && strcmp(autosalone[i].acquirente.nome, nome) == 0)
    {
      cout << "Marca: " << autosalone[i].marca << endl;
      cout << "Anno: " << autosalone[i].anno << endl;
      cout << "Cilindrata: " << autosalone[i].cc << endl;
      cout << "Cognome: " << autosalone[i].acquirente.cognome << endl;
      cout << "Nome: " << autosalone[i].acquirente.nome << endl;
    }
}