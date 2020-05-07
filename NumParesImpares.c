#include<stdio.h>
int main(){

    int x=0;
    int y=0;
    int num;
    int i;

    for(i = 0; i < 6; i++){
        printf("Introduce el numero: ");
        scanf("%d", &num);
        if (num>99 && num<201){
            if(num%2==0){
                x=x+1;
            }else{
                y=y+1;
            }
        }else{
            printf("Introduce un numero correcto.\n");
            i=i-1;
        }        
    }
    printf("Hay %d numeros pares y %d numeros impares",x,y);
    return 0;

}