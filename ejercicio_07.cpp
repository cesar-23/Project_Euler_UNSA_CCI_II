#include <iostream>
using namespace std;

bool esPrimo(long int num){
    bool aux=true;
    for(long int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          aux = false;
          break;
       }
    }
    return aux;
}

long int respuesta(){
    long int respuesta,auxiliar=0,contador=0;
    while(contador!=10003){
        if(esPrimo(auxiliar)){
            respuesta=auxiliar;
            contador++;
        }
        ++auxiliar;
    }
    return respuesta;
}


int main(){
    cout<<respuesta();
    return 0;
}