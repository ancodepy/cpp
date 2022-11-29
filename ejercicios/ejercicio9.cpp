/*Escriba en un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo y escriba en la salida estandar su hipotenusa*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double h, c1, c2;
  cout << "Cateto 1: "; cin >> c1;
  cout << "Cateto 2: "; cin >> c2;

  h = sqrt(pow(c1, 2)+pow(c2, 2));
  cout << h << endl;
  return 0;
}