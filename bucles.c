#include <stdio.h>

int main(){
    //pide un numero y muestra en pantalla el mismo numero de asteriscos.
    //creo el numero
    int numero;
    int i = 1;
    //pido el numero
    printf("Introduce un numero: ");
    scanf("%d", &numero);  //me acuerdo que en el scanf hay que poner &
    //algoritmo
    //me doy cuenta que necesito un bucle
    // for, while como no sé cuando voy a acabar voy a hacer un while
    printf("\n con el bucle while \n");
    while(i<=numero){    //while = mientras que
        printf("* ");
        i=i+1;
    }
    printf("\n con el bucle for \n");
    for(int x=1; x<=numero; x++){
        printf("* ");
    }

    return 0;
}