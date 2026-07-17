#include <stdio.h>

int main() {
    int suma = 0; // Acumulador siempre inicializado en 0

    printf("Multiplos de 5 comprendidos entre el 1 y el 100:\n");

    // El ciclo inicia en 5 y avanza sumando 5 en cada iteracion (i += 5)
    for (int i = 5; i <= 100; i += 5) {
        printf("%d ", i); // Imprime el multiplo actual
        suma += i;        // Lo acumula en el total
    }

    // Se imprimen un par de saltos de linea (\n) para separar la lista del resultado final
    printf("\n\nLa sumatoria de estos numeros es: %d\n", suma);

    return 0;
}