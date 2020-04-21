#include<stdio.h>

int main(){
    /*
    * Muestra los numeros del 100 al 1
    */
    
    for (int num = 1; num<=100; num++)
    {
        if(num%2 == 0){
                printf("%d   ", num);
        }
        
    }

    return 0;
}