#include <iostream>
using namespace std;

long long int respuesta(long long int n){
    for(long long i=2;i<n ;i++){
        while(n%i==0 && n!=i){
            n=n/i;
        }
    }
    return n;
}

int main(){
    long long num = 600851475143;
    cout<<"El mayor primo es:\t"<<respuesta(num);
}



