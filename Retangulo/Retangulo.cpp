#include <iostream>
#include <math.h>   // lib de C
/*#include <cmath> // lib de C++  */
#include <iomanip>

using namespace std;

int main(void){

  double base, altura, area;
  double perimetro, diagonal;

  cout << "Base do retangulo: ";
  cin >> base;

  cout << "\n\nAltura do retangulo: ";
  cin >> altura;

  area = base * altura;
  perimetro = 2 * (base + altura);
  diagonal = sqrt(pow(base,2) + pow(altura,2));

  cout << fixed << setprecision(4);
  cout << "\n\nArea = " << area;
  cout << "\nPerimetro = " << perimetro;
  cout << "\nDiagonal = " << diagonal;

}
