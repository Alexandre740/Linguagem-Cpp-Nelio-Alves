#include <iostream>

int comparador(int n1, int n2);

int main(){

 using namespace std;

  int x, y;

  do{

  cout << "Digite X: ";
  cin >> x;
  cout << "\nDigite Y: ";
  cin >> y;

  comparador(x,y);

  cout << endl;

  } while (x != y);

  return 0;
}

int comparador(int n1, int n2){
  if (n1 < n2){
   std::cout << "\nCRESCENTE\n";
  }

  else if (n2 < n1) {
   std::cout << "\nDECRESCENTE\n";
  }
}
