#include <iostream>
#include <math.h>
using namespace std;

bool analizar_lista(long int lista[],long int n){
    for(int i=0;i<n/2;i++){
        if(lista[i]!=lista[n-i-1]){
            return false;
        }
    }
    return true;
}

bool capicua(long int num){
    long int digitos=1,num2=num;
    while(num>10){
        digitos++;
        num=num/10;
    }
    long int lista[digitos];
    for(int i=0;i<digitos;i++){
        lista[i]=num2%10;
        num2=num2/10;
    }
    if(analizar_lista(lista,digitos)==true){
        return true;
    }

    return false;
}

long int respuesta(){
    long int mayor=0;
    for(int i=999;i>900;i--){
        for(int j=999;j>900;j--){
            if(capicua(i*j) && (i*j)>mayor){
                mayor=i*j;
            }
        }
    }
    return mayor;
}

int main()
{
    cout<<respuesta();
    return 0;
}