#include <iostream>
#include <math.h>
using namespace std;

bool esPitagorico(int a,int b, int c){
    if(pow(a,2)+pow(b,2)==pow(c,2)){
        return true;
    }else{
        return false;
    }
}

bool suman1000(int a,int b, int c){
    if(a+b+c==1000){
        return true;    
    }else{
        return false;
    }
}

int respuesta(){
    int respuesta=1;
    for(int i=0;i<500;i++){
        for(int j=0;j<500;j++){
            for(int k=0;k<500;k++){
                if(esPitagorico(i,j,k)&&suman1000(i,j,k)){
                    respuesta=i*j*k;
                }
            }
        }
    }
    return respuesta;
}

int main(){
    cout<<respuesta();
    return 0;
}