/*Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final de los cuatro alumnos*/

#include <iostream>
using namespace std;

int main() {
  float suma = 0, valor;
  for (int i = 0; i < 4; i++) {
    cout << "Nota " << i+1 << ": "; cin >> valor;
    suma += valor;
  }
  cout.precision(2);
  cout << "Nota final: " << suma/4 << endl;
  return 0;
}