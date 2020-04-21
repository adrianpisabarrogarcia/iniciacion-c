#include<stdio.h>

int main(){

    int num;
    int resultado;
    printf("Inserta un numero: ");
    scanf("%d", &num);
    /*
        num * 0 = 0
        num * 1 = ..
        num * 2 = ..
              ...
        num * 10 = ..

        bucle!!!!!!!! --> for!!!!
        for --> sabemos desde que numero a que numero hay que ir
        while --> no sabemos desde que numero a que numero  hay que ir
    */
   for (int i = 0; i <= 10; i++)
   {
       resultado = num * i;
       printf("%d x %d = %d \n", num, i, resultado);
   }

   printf("fin");
   




    return 0;
}