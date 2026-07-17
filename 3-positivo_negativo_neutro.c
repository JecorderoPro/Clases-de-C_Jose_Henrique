#include<stdio.h>
int main(){ 
    
    int numero;
    printf("ingrese el numero,para saber si es positivo\n neutro o\n negativo\n");
    scanf("%d",&numero);
    
    if(numero<0){
        printf("el numero %d es negativo\n",numero);
        }else if(numero==0){
            printf("el numero %d es neutro\n",numero);
            }else{
               printf("el numero %d es positivo\n",numero);
             }



    return 0;
}