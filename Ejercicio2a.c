#include<stdio.h>

int main(){
    /*
    * Muestra los numeros entre el 1 y el 100
    */
    
    //declarar variables
    int num;

    //empezar a programar
    /**
     *  if --> codicion
     *  while, for --> repeticiones/bucles
     *      . for --> cuando sabemos cuando va a parar el bucle
     *      . while --> cuando no sabemos cuando parar el bucle
     */
    for (num = 1; num<=100; num++)    //num++ --> num=num+1
    {
        printf("El número es: %d \n", num);
    }

    return 0;
}