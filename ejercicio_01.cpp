#include <iostream>
using namespace std;

int sumaTotal=0;
int main(){
    for(int i = 1; i < 1000; i = i +1){
        if(i%3==0 || i%5==0){
            sumaTotal+=i;
        }
    }
    cout<<"La suma de los multiplos de 3 y 5 por debajo de 1000 es: \t"<<sumaTotal;
    return 0;
}
