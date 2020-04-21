#include<stdio.h>
    /*
    * Muestra los numeros del 1 al 100 aquellos que sean primos
    * los vamos a sacar por pantalla/mostrar
    */

int main(){

    for(int num = 100; num>0; num--){
        if(num%2 != 0){
                printf("%d   ", num);
        }
    }
    
    

    return 0;
}