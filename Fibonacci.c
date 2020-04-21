#include<stdio.h>

int main(){
    int repeticionSecuencia;
    printf("¿Hasta que numero de veces quieres imprimir la secuencia?");
    scanf("%d", &repeticionSecuencia);
    int a , b, resultado;
    a = 1;
    b = 1;

    if(repeticionSecuencia == 1){
        printf("1");
    }else if(repeticionSecuencia >1){
        printf("1 ");
        for (int i = 2; i <= repeticionSecuencia; i++)
        {
            resultado = a + b;
            printf("%d ", resultado);
            b = a;
            a = resultado;
        }
    }else{
        printf("Has introducido un numero no valido");
    }
    
    
    printf("\n");


    return 0;
}