#include <iostream>
using namespace std;
static int myarray[2000000];
long int n=2000000;

void establecer_en_unos(){
    for(long int i=0;i<=n;i++)     
        myarray[i]=1;
}

void descartar_no_primos(){
    for(long int i=2;i<=n;i++){ 
        if(myarray[i]==1){ 
            for(long int j=2;i*j<=n;j++){
                myarray[i*j]=0; 
            }
        }
    }
}
long long respuesta(){
    long long suma=0;
    for(long int i=2;i<=n;i++){
        if(myarray[i]==1){ 
            suma+=i;        
        }
    }
    return suma;
}
int main(){

    establecer_en_unos();
    descartar_no_primos();
    cout<<respuesta();
    return 0;
}