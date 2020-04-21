#include<stdio.h>

int main(){

    int num;

    printf("Escribe numero para hacer el factorial de ese num: ");
    scanf("%d", &num);
    
    if(num == 0){
        printf("El factorial es 1");
    }else if(num >0){
        for (int i = num-1; i > 0; i--)
        {
            num = num * i;         
            
        }
        printf("El factorial es: %d", num);
        
    }else{
        printf("El numero introducido es negativo");
    }
    


    printf("\n\n\n\n\n");
    return 0;
}