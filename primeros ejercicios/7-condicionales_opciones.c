#include<stdio.h>

int main(){

        // Declaración de variables
    int n1, n2, n3, n4, cuadrado, mayor;
    
    // Inicialización obligatoria para acumuladores/contadores
    int suma = 0;
    int contp = 0;
    float media = 0.0;

    // Lectura de datos (read)
    printf("Ingresa 4 numeros enteros separados por espacio: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if(n1 % 2==0){
        contp+=1;
        cuadrado=n3*n3;
    }
    if(n2 % 2==0){
        contp+=1;
    }

     if(n3 % 2==0){
        contp+=1;
    }

     if(n4 % 2==0){
        contp+=1;
    }

    // Bloque 2: Búsqueda del mayor
    mayor = n1;
    if (mayor < n2) {
        mayor = n2;
        // Asumo que en tu pseudocódigo "if(mayor<-n3)" fue un error de tipeo por "<"
        if (mayor < n3) { 
            mayor = n3;
        } else {
            mayor = n4;
        }
    }

    // Bloque 3: Condiciones para media y suma
    if (n2 < n4 && n2 < n3 && n2 > n1) {
        // Se agregaron paréntesis para respetar el orden matemático
        media = (n1 + n2 + n3 + n4) / 4.0; 
    }
    
    if (n2 > n3 && n3 > 50 && n3 < 700) {
        suma = n1 + n2 + n3 + n4;
    }

    // Impresión de resultados (write)
    printf("Cantidad de pares: %d\n", contp);
    printf("El numero mayor (segun algoritmo): %d\n", mayor);
    printf("Media condicional: %.2f\n", media);
    printf("Suma condicional: %d\n", suma);

    return 0;
}