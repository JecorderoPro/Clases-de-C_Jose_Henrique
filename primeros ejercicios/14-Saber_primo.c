#include<stdio.h>

int main(){
    
    int cont_primo=0,numero,x=1;
    printf("ingrese el numero para verificar\n");
    scanf("%d",&numero);
    while(x<=numero){
        if(numero % x==0){ 
        cont_primo=cont_primo+1;
        }
        x+=1;
    }
    if(cont_primo==2){
        printf("es primo el numero %d",numero);
    }else{
          printf("NO es primo el numero %d",numero);
    }




    
    return 0;

}