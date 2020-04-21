#include<stdio.h>

int main(){
    int num;
    int contador = 0;

    printf("Introduce un numero: ");
    scanf("%d", &num);
    for(int x =num; x>0; x--){
        if(num%x == 0){
            contador= contador+1;
            //contador += 1 <-- es lo mismo
        }
    }
    if (contador==2){
        printf("El numero %d es primo", num);
    }else{
        printf("El numero %d no es primo", num);
    }
    
}