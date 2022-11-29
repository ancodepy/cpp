#include <iostream>
using namespace std;

int main() {
  int x, y, aux;
  cout << "x: "; cin >> x;
  cout << "y: "; cin >> y;
  cout << x << " " << y << endl;

  aux = x; x = y; y = aux;
  cout << x << " " << y << endl;
  return 0;
}