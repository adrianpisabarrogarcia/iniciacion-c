#include<stdio.h>

int main(){
    int numero;
    int resultado;

    printf("Introduce el numero por el que quieres visualizar la tabla de multiplicar: ");
    scanf("%d", &numero );

    for (int i = 0; i <= 10; i++)
    {
        resultado = numero * i;
        printf("%d * %d = %d \n", numero, i, resultado);

    }
   printf("fin");


    return 0;
}