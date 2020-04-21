#include<stdio.h>

int main(){

    int repeticiones;
    int a, b, resultado;
    printf("¿Cuantas repeticiones de la sucesion de fibbonacci quieres?");
    scanf("%d", &repeticiones);

    //sucesion
    /*
        a+b = resultado
        0+1 = 1 |||||  repeticiones = 0 --> 1
        1+1 = 1 |||||  repeticiones = 1 --> 1
        2+1 = 3
        3+2 = 5
        5+3 = 8
        8+5 = 13
        ...
    */
   if ( 1 == repeticiones)
   {
      printf("1");
   }else if (2 == repeticiones)
   {
       printf("1 1");
   }else if(2 <= repeticiones){
       printf("1 1 ");
       a = 1;
       b = 1;
       for (int i = 3; i <= repeticiones; i++)
       {
           resultado = a + b;
           printf("%d ", resultado);

           //cambios
           b = a;
           a = resultado;

       }
       
   }else{
       printf("has puesto un numero negativo");
   }
   
   
    printf("\n\n\n");
    return 0;

}