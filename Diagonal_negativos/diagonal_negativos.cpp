#include <iostream>

int main(void){

  using namespace std;

  int n;

  cout << "Qual a ordem da matriz: ";
  cin >> n;

  int mat[n][n]; //criacao da matriz

  //armazenamento de dados
  for (int i=0; i<n ;i++){
    for (int j=0; j<n; j++){
     cout << "\nElemento [" << i << "," << j << "]: ";
     cin >> mat[i][j];
    }
  }

  //diagonal principal
  cout << "\nDiagonal principal: ";
  for (int i=0; i<n ;i++){
    for (int j=0; j<n; j++){
     if (i == j){
        cout << mat[i][j] << "  ";
     }
    }
  }

  //quantidade de negativos
  cout << "\nQUANTIDADE DE NEGATIVOS = ";
  int contador=0;
  for (int i=0; i<n ;i++){
    for (int j=0; j<n; j++){
     if (mat[i][j] < 0){
        contador = contador + 1;
     }
    }
  }
  cout << contador << endl;
}
