#include <iostream>

namespace NamespaceA {
  int x;
  class ClaseB {
    public:
      int x;
  };
}

int main() {
  NamespaceA::x = 2;
  NamespaceA::ClaseB claseB;
  claseB.x = 4;
  std::cout << claseB.x / NamespaceA::x << std::endl;
  return 0;
}