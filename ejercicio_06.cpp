#include <iostream>
#include <math.h>
using namespace std;

long int suma_de_cuadrados(int n){
    long int aux=0;
    for(int i=1;i<=n;i++){
        aux+=pow(i,2);
    }
    return aux;
}
long int suma_al_cuadrado(int n){
    long int aux=0,aux2;
    for(int i=1;i<=n;i++){
        aux+=i;
    }
    aux2=pow(aux,2);
    return aux2;
}

long int respuesta(){
    long int suma1,suma2,respuesta;
    suma1=suma_de_cuadrados(100);
    suma2=suma_al_cuadrado(100);
    respuesta=suma2-suma1;
    return respuesta;
}


int main(){
    cout<<respuesta();
    return 0;
}