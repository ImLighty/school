#include <iostream>
#include <cstring>
#define N 1000
using namespace std;

// this code hasn't been written by just me, so if you see terrible code, that's why

int main()
{
  char dec[N], base[N];
  int n, scelta;
  cout << "1. Encode" << endl;
  cout << "2. Decode" << endl;
  cin >> scelta;
  if (scelta == 2)
  {
    cout << "Inserire una parola da decifrare" << endl;
    cin >> dec;
    for (int i = 0; dec[i] != '\0'; i++)
    {
      while ((dec[i] > 122 || (dec[i] < 97 && dec[i] > 90) || dec[i] < 65) && dec[i] != '\0')
      {
        for (int i = 0; dec[i] != '\0'; i++)
          dec[i] = '\0';
        cout << "la parola deve contenere solo lettere" << endl;
        cin >> dec;
      }
    }
    strncpy(base, dec, N);
    for (n = 0; n < 26; n++)
    {
      strncpy(dec, base, N);
      for (int i = 0; dec[i] != '\0'; i++)
      {
        if ((dec[i] - n < 65 && dec[i] < 91) || (dec[i] - n < 97 && dec[i] > 96))
        {
          dec[i] = dec[i] + 26 - n;
        }
        else
          dec[i] -= n;
      }
      cout << "Parola decifrata = " << dec << " chiave= " << n << endl;
    }
  }
  else
  {
    cout << "inserire la parola da codificare" << endl;
    cin >> dec;
    for (int i = 0; dec[i] != '\0'; i++)
    {
      while ((dec[i] > 122 || (dec[i] < 97 && dec[i] > 90) || dec[i] < 65) && dec[i] != '\0')
      {
        for (int i = 0; dec[i] != '\0'; i++)
          dec[i] = '\0';
        cout << "la parola deve contenere solo lettere" << endl;
        cin >> dec;
      }
    }
    strncpy(base, dec, N);
    for (n = 0; n < 26; n++)
    {
      strncpy(dec, base, N);
      for (int i = 0; dec[i] != '\0'; i++)
      {
        if ((dec[i] + n > 122 && dec[i] > 97) || (dec[i] + n > 90 && dec[i] <= 90))
        {
          dec[i] = dec[i] - 26 + n;
        }
        else
          dec[i] += n;
      }
      cout << "Parola cifrata = " << dec << " chiave= " << n << endl;
    }
  }
}
