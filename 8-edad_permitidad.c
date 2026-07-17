#include<stdio.h>

int main(){

    int legal;
    printf("ingrese su edad por favor\n:");
    scanf("%d",&legal);
    if(legal<=21){
        printf("usted puede apostar\n");

        }else{
            printf("usted no puede apostar\n")
        }
            if(legal<=18){
                printf("usted puede votar\n");
            }else{
                 printf("usted no puede votar\n");
                }  if(legal<=16){
                printf("usted puede conducir\n");
            }else{
                 printf("usted no puede conducir\n");
                }






    return 0;
}