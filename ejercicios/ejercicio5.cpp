/*Expresion: a + b/c-d*/

#include <iostream>
using namespace std;

int main() {
  float n[4];
  char letras[] = {'a', 'b', 'c', 'd'};

  for (int i = 0; i < 4; i++) {
    cout << letras[i] << ": "; cin >> n[i];
  }

  float expresion = n[0] + (n[1]/(n[2]-n[3]));
  cout.precision(2);
  cout << expresion << endl;
  return 0;
}