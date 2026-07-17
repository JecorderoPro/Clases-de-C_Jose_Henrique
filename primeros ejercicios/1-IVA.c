#include<stdio.h>

int main(){

    int iva,cant;
    float res;
    printf("ingrese la cantidad e  iva correspondiente\n");
    scanf("%d %d",&cant,&iva);
    iva=iva/100;
    printf("%d",iva);
    res=cant*iva;
    printf("Aqui esta la cantidad de iva depositada: %f",res);






    return 0;
}