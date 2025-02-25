#include <iostream>
#include <iomanip>

int main(void){

  using namespace std;

  string nome1, nome2;
  int idade1, idade2;
  double media;

  cout << "Dados da primeira pessoa:\n";
  cout << "Nome: ";
  cin >> nome1;
  cout << "\nIdade: ";
  cin >> idade1;
  cout << "\n\nDados da segunda pessoa:\n";
  cout << "Nome: ";
  cin >> nome2;
  cout << "\nIdade: ";
  cin >> idade2;

  media = (idade1 + idade2) / 2;

  cout << fixed << setprecision(1);
  cout << "\nA idade media de "<< nome1 << " e " << nome2
       << " e de " << media << " anos\n\n";

}
