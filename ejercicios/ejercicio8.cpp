/*La calificacion final de un estudiante es la media ponderada de tres notas:
La nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un 60% y la nota de participacion que cuenta el 10% restante. Escriba un programa que lea de la entrada estandar las tres notas de un alumno y escriba en la salida estandar su nota final.*/

#include <iostream>
using namespace std;

int main() {
  float notas[3];
  string tipo[] = {"practicas", "teoria", "participacion"};
  
  int limit = sizeof(notas)/sizeof(float);
  for (int i=0; i<limit; i++) {
    cout << "nota de " << tipo[i] << ": "; cin >> notas[i];
  }

  float nota_final = (notas[0]*30/100)+(notas[1]*60/100)+(notas[2]*10/100);
  cout << "nota final: " << nota_final << endl;
  return 0;
}