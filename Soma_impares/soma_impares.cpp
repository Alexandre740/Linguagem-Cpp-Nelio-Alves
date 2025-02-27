#include <iostream>

int main(){

  using namespace std;

  int x, y, soma=0;

  cout << "Digite dois numeros: " << endl;
  //teste para ler dois valores seguidos;
  cin >> x;
  cin >> y;

  if (x == y){
    cout << "\nNao existem impares entre esses numeros!\n";
  }

  if (y > x)
  {
      for (int i=x+1; i<y; i++){
       if (i % 2 != 0){
        soma = soma + i;
       }
      }
  }

  else if (x > y)
  {
      for (int i=y+1; i<x; i++){
       if (i % 2 != 0){
        soma = soma + i;
       }
      }
  }

  cout << "\nSoma dos impares = " << soma;
  cout << endl;

  return 0;

}
