#include<stdio.h> //libreria
//int = entero
int main(){ //programa principal

    /*
        0x0= 0
          1
          2
          3
          4
          5
          6
          7
          8
          9
          10
        1 0

        ...
        9 * 10 = 90
    */
   int resultado;
                            //i = i +1
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            resultado = i * j;
            printf("%d x %d = %d \n", i, j, resultado);
        }
        printf("\n");
    }
    
    return 0; //para que se acabe el programa va a devolver un 0
}