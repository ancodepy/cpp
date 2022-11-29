#include <iostream>
using namespace std;

int main() {
  int opcion, edad;
  cout << "Numero: ";
  cin >> opcion;

  // Sentencia switch
  switch (opcion) {
    case 1:
      cout << "Opcion 1" << endl;
      break;
    case 2:
      cout << "Opcion 2" << endl;
      break;
    default:
      cout << "Opcion por defecto" << endl;
  }

  cout << "Edad: ";
  cin >> edad;

  if (edad >= 18 && edad < 50) {
    cout << "Puedes votar ya que cumples con la edad estipulada." << endl;
  } else {
    cout << "No puedes votar ya que no cumples con la edad estipulada, lo siento." << endl;
  }
  return 0;
}