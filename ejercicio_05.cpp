#include <iostream>
using namespace std;

long int mcm(long int a,long int b){
    int mult;
    int max;
    if(b==1){
        return 1;
    }
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    while(true){
        if(max%a==0 && max%b==0){
            mult=max;
            break;
        }
        else{
            max += 1;
        }
    }
    return mult;
}

long int respuesta(){
    int aux=2;
    for(int i=1;i<20;i++){
        aux = mcm(i,aux);
    }
    return aux;
}

int main(){
    cout<<respuesta()<<"\n";
    return 0;
}