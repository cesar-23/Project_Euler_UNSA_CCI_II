#include <iostream>

using namespace std;


long int fib(int n){
    if(n < 2)
        return n;
    return fib(n-1) + fib(n-2);
}

long int respuesta(){
    int aux=0;
    long int sumaTotal=0;
    for(int i=0;i<34;i++){
        if(fib(i)%2==0){
            aux=fib(i);
            sumaTotal+=aux;
        }
    }
    return sumaTotal;
}

int main(){

    cout<<"La suma de los terminos pares de la serie de fibonacci menores a 4000000 es: \t"<<respuesta()<<"\n";
    cout<<fib(4);
    return 0;
}

