#include <stdio.h>

int main() {
    int suma = 0,n;      // Acumula el valor de los números (ej. 1 + 3 + 5...)
    int contador = 0;  // Cuenta cuántos números impares hemos procesado
    printf("ingresar el donde se quiera llegar\n");
    scanf("%d",&n);
    // El ciclo inicia en 1 (primer impar) y avanza sumando 2 (i += 2)
    for (int i = 1; i <= n; i += 2) {
        contador++;    // Incrementamos el contador en 1
        suma += i;     // Sumamos el número actual al total
    }

    // Impresión de los resultados finales
    printf("Cantidad de numeros impares entre 1 y 300: %d\n", contador);
    printf("La sumatoria total de estos impares es: %d\n", suma);

    return 0;
}