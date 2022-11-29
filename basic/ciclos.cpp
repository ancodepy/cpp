#include <iostream>
using namespace std;

int main() {
  // Ciclo for
  int numeros[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int limite = sizeof(numeros)/sizeof(int);
  cout << "Ciclo for" << endl;
  for (int i=0; i< limite; i++) {
    if (numeros[i]%2==0) {
      cout << numeros[i] << endl;
    }
  }

  int i = 0;
  cout << "Ciclo while" << endl;
  while (i<limite) {
    if (numeros[i]%2==0) {
      cout << numeros[i] << endl;
    }
    i++;
  }
  return 0;
}