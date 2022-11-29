/* Escriba la siguiente expresion en c++
  > a + b/c / d + c/f */
#include <iostream>
using namespace std; 

int main() {
  float a, b, c, d, f;

  cout << "a: "; cin >> a;
  cout << "b: "; cin >> b;
  cout << "c: "; cin >> c;
  cout << "d: "; cin >> d;
  cout << "f: "; cin >> f;

  float expresion = (a + (b/c)) / (d + (c/f));
  cout.precision(3);
  cout << expresion << endl;
  return 0;
}
