#include <iostream>
#include <string>


int main() {
  int entero = 900; // 32 bits
  short int entero_corto = 20; // 16 bits
  long int entero_largo = 60; // 64 bits
  auto name = "Maria"; // Deduce el tipo de valor, pero no se recomienda
  wchar_t letra = 'A'; // caracter 4 bits
  
  std::cout << name << " " << entero << std::endl;

  return 0;
}