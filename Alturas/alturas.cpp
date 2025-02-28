#include <iostream>
#include <iomanip>
#include <cstring>


//Um problema que acontece nesse programa sao nomes
//e sobrenomes, como "Joao Melo", o algoritmo nao consegue
//ler os " ";

int main(void){

  using namespace std;

  int n, i;

  cout << "Quantas pessoas serao digitadas ? ";
  cin >> n;

  string nomes[n];
  int idades[n];
  double alturas[n];

  for (i=0; i<n; i++){
   cout << "\nDados da " << i+1 << "a pessoa:\n";
   cout << "Nome: ";
   cin >> nomes[i];
   cin.ignore();
   cout << "\nIdade: ";
   cin >> idades[i];
   cout << "\nAltura: ";
   cin >> alturas[i];
  }

  double alturaMedia, soma=0;  //calculo da altura media;
  for (i=0; i<n; i++){
   soma = soma + alturas[i];
  }

  alturaMedia = soma / n;

  cout << fixed << setprecision(2);
  cout << "\nAltura media: " << alturaMedia << endl;


  //porcentagem de pessoas com menos de 16 anos;
  int contador=0;
  for (i=0; i<n; i++){
   if (idades[i] < 16){
     contador = contador + 1;
   }
  }

  double porcentagem = contador * 100 / n;
  cout << fixed << setprecision(1);
  cout << "\nPessoas com menos de 16 anos: " << porcentagem << "%\n";

  //nome das pessoas com menos de 16 anos
  for (i=0; i<n; i++){
   if (idades[i] < 16){
    cout << nomes[i] << endl;
   }
  }

}
