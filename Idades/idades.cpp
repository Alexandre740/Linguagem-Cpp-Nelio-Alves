#include <iostream>
#include <iomanip>
#include <cstring>

int main(void){

  using namespace std;

  string nome1, nome2;
  int idade1, idade2;
  double media;

  cout << "Dados da primeira pessoa:\n";
  cout << "Nome: ";
  //cin.ignore();                 //limpar o \n
  getline(cin, nome1);           //ler a linha inteira
  cout << "\nIdade: ";
  cin >> idade1;
  cin.ignore();
  
  cout << "\nDados da segunda pessoa:\n";
  cout << "Nome: ";
  //cin.ignore();
  getline(cin, nome2);
  cout << "\nIdade: ";
  cin >> idade2;

  media = (idade1 + idade2) / 2;

  cout << fixed << setprecision(1);
  cout << "\nA idade media de "<< nome1 << " e " << nome2
       << " e de " << media << " anos\n\n";

}
