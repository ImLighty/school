#include <iostream>
#include <cstring>

#define ALPHABET_SIZE 26
#define MSG_SIZE 100

using namespace std;

void generateAlphabet(char alphabet[], int dim)
{
  for (int i = 0; i < dim; i++) alphabet[i] = 'a' + i;
}

void generateCipherAlphabet(char alphabet[], int dim)
{
  cout << "Insert cipher alphabet: ";
  for (int i = 0; i < dim; i++) cin >> alphabet[i];
}

void cipher(char alphabet[], char cipherAlphabet[], int dim, char msg[], char cipherMsg[], int msgSize)
{
  int index, i = 0;
  while(msg[i] != '\0')
  {
    index = msg[i] - 'a';
    cipherMsg[i] = cipherAlphabet[index];
    i++;
  }
}

int main()
{
  char alphabet[ALPHABET_SIZE], cipherAlphabet[ALPHABET_SIZE], msg[MSG_SIZE], cipherMsg[MSG_SIZE];
  generateAlphabet(alphabet, ALPHABET_SIZE);
  generateCipherAlphabet(cipherAlphabet, ALPHABET_SIZE);
  cout << "Insert message: ";
  cin.getline(msg, MSG_SIZE);
  cipher(alphabet, cipherAlphabet, ALPHABET_SIZE, msg, cipherMsg, MSG_SIZE);
  cout << "Cipher message: " << cipherMsg << endl;
}