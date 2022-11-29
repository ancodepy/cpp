/* Resolver la siguiente expresion en c++
  > a sobre b mas 1*/

#include <iostream>
using namespace std;

int main() {
  float a, b;
  
  cout << "a: "; cin >> a;
  cout << "b: "; cin >> b;
  
  float expresion = (a/b)+1; 
  cout << expresion << endl;
  
  return 0;
}