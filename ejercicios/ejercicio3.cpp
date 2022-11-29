/* Escribir la siguiente expresion en c++
  > a mas b dividido c mas d*/

#include <iostream>
using namespace std;

int main() {
  float a, b, c, d;
  cout << "a: "; cin >> a;
  cout << "b: "; cin >> b;
  cout << "c: "; cin >> c;
  cout << "d: "; cin >> d;

  float expresion = (a+b)/(c+d);
  cout.precision(3);
  cout << expresion << endl;
  return 0;
}