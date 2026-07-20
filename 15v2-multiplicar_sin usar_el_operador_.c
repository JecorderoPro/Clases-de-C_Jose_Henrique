#include <stdio.h>

int main() {
    int num1, num2;
    int resultado = 0;
    int factor1, factor2;
    int i;

    // Se solicitan los valores al usuario
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Guardamos los valores en variables temporales para no perder los originales al momento de imprimir
    factor1 = num1;
    factor2 = num2;

    // Condicional para manejar el signo: 
    // Si el ciclo (factor2) es negativo, invertimos ambos números.
    if (factor2 < 0) {
        factor1 = -factor1; 
        factor2 = -factor2; 
    }

    // Ciclo para realizar la multiplicacion por medio de sumas
    for (i = 0; i < factor2; i++) {
        resultado += factor1;
    }

    // Se imprime el resultado final
    printf("El resultado de multiplicar %d por %d es: %d\n", num1, num2, resultado);
    
    return 0;
}