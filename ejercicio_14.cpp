#include <iostream>
using namespace std;

long long  tamano_collatz(long long num){ 
    long long contador=0;   
    while (num != 1){  
        num = (num%2==0)?(num/2):(num*3)+1;                            
       contador++;   
    }
    return contador+1;
}

long long respuesta(){
    long long tamanomax_cadena=0, numero=0;
    for(long int i=1;i<1000000;i++){
        if(tamano_collatz(i)>tamanomax_cadena){
            numero = i;
            tamanomax_cadena=tamano_collatz(i);
        }
    }
    return numero;
}

int main(){
    cout<<respuesta();
    return 0;
}
