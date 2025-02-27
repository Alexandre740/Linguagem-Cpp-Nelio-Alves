#include <iostream>

int main(void){

 using namespace std;

  int a, b, c;

  cout << "Digite a: ";
  cin >> a;
  cout << "\nDigite b: ";
  cin >> b;
  cout << "\nDigite c: ";
  cin >> c;

  if (a > b && b > c){
    cout << "\nO menor e " << c;
  }

  else if (b > a && a > c){
    cout << "\nO menor e " << c;
  }

  else if (a > c && c > b){
    cout << "\nO menor e " << b;
  }

  else if (c > a && a > b){
    cout << "\nO menor e " << b;
  }

  else if (c > b && b > a){
    cout << "\nO menor e " << a;
  }

  else if (b > c && c > a){
    cout << "\nO menor e " << a;
  }

  else if (a == c && c == b){
    cout << "\nO menor e " << b;
  }

  else if (a == c && c > b){
    cout << "\nO menor e " << b;
  }

  else if (a == b && b > c){
    cout << "\nO menor e " << c;
  }

  else if (a == c && b > c){
    cout << "\nO menor e " << c;
  }

   cout << endl;

}
