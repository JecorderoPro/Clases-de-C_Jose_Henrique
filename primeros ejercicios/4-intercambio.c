#include<stdio.h>

int main(){
    int var1=30;
    int var2=60;
    printf("Antes del intercambio: var1 = %d, var2 = %d\n", var1, var2);
    var1=var1+var2;
    var2=var1-var2;
    var1=var1-var2;

    printf("Despues del intercambio: var1 = %d, var2 = %d\n", var1, var2);




    return 0;
}