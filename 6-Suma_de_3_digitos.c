#include<stdio.h>

int main(){
    int numero,Suma,unidad,decena,centena;
    printf("Ingresa un numero entero de 3 digitos: ");
    scanf("%d", &numero);

    unidad=numero % 10;
    decena=(numero / 10) % 10;
    centena=numero/100;

    Suma=unidad+decena+centena;

    printf("La suma de los digitos (centena + decena + unidad) es: %d\n", Suma);







    return 0;
}