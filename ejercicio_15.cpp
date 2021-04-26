#include <iostream>
using namespace std;
int const fila=21; 
int const columna=21;
long long  matrix[fila][columna];

void rellenar_unos(){
	for(int i=0;i<fila;i++){    
		for(int j=0;j<columna;j++){
			matrix[i][j]=1;	
		}
	}
}

void suma_de_posibilidades(){
	for(int i=1;i<fila;i++){ 
		for(int j=1;j<columna;j++){
			matrix[i][j]=matrix[i-1][j]+matrix[i][j-1];
		}
	}
}

int main(){
	rellenar_unos();
	suma_de_posibilidades();
	cout<<matrix[20][20]; 
	return 0;
}