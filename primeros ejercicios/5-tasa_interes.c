#include<stdio.h>

int main(){

    double monto_inicial,tasa_interes,n,total;

    printf("ingrese el monto inicial\n");
    scanf("%lf",&monto_inicial);
    printf("ingrese la tasa mensual\n");
      scanf("%lf",&tasa_interes);
    printf("ingrese la cantidad de años\n");
         scanf("%lf",&n);
         tasa_interes=tasa_interes/100;
         total=monto_inicial*(tasa_interes*12*n);
         printf("%f",total);


    return 0;
}