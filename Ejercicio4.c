#include<stdio.h>

int main(){
    int suma=0;

    for(int num = 1; num<=100; num++){
        //suma += num; <--es lo mismo
        suma = suma + num;
        

    }
    printf("%d", suma);
}