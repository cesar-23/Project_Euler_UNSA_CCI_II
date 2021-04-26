#include <iostream>
using namespace std;

int divisores(long int num){
    int factores=1;
    int aux=2;
    int exponente=0;
    do{
        if(num%aux==0){
            num/=aux;
            exponente++;
        }
        else if(num==1){
            factores*=(exponente+1);
            num--;
        }
        else{
            factores*=(exponente+1);
            aux++;
            exponente=0;
        }
    }while(num!=0);
    return factores;
}

long int respuesta(){
    	for (int n = 1, numero = 1;; n++, numero += n)
		if (divisores(numero) > 500) {
			return numero;
		}
}

int main()
{
    cout << respuesta();
    return 0;
}