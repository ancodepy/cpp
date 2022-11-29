/* Pedir 3 datos:
  - Edad: int
  -Sexo: char
  - Altura: double
  E imprimirlos por consola*/

#include <iostream>
using namespace std;

int main() {
  int edad; char sexo[10]; double altura;
  cout << "Edad: ";
  cin >> edad;
  cout << "Sexo: ";
  cin >> sexo;
  cout << "Altura: ";
  cin >> altura;

  cout << "* Edad: " << edad << "\n* Sexo: " << sexo << "\n* Altura: " << altura << endl;
  return 0;
}