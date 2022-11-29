#include <iostream>

int main() {
  int edades[4] = { 24, 30, 19, 18 };
  std::cout << sizeof(edades) / sizeof(int) << std::endl; // longitud de nuestra lista
  return 0;
}