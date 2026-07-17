#include <stdio.h>

int multiplicar(int a, int b) {
    int resultado = 0;
    int factor1 = a;
    int factor2 = b;

    // Manejo de signos: 
    // Si el ciclo (factor2) es negativo, invertimos ambos números.
    // Ej: 5 * -3 se convierte en -5 * 3 (podemos iterar 3 veces)
    // Ej: -5 * -3 se convierte en 5 * 3 (podemos iterar 3 veces)
    if (factor2 < 0) {
        factor1 = -factor1; 
        factor2 = -factor2; 
    }

    // Sumamos factor1 a sí mismo, factor2 veces
    for (int i = 0; i < factor2; i++) {
        resultado += factor1;
    }

    return resultado;
}

int main() {
    int num1 = 10;
    int num2 = 9;
    
    int producto = multiplicar(num1, num2);
    
    printf("El resultado de multiplicar %d por %d es: %d\n", num1, num2, producto);
    
    return 0;
}