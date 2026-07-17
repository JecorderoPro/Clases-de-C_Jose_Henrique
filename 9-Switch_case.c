#include <stdio.h>

int main() {
    int cedula, divisor;

    printf("Ingrese el numero de cedula: ");
    scanf("%d", &cedula);

    // Obtenemos el último dígito de la cédula
    divisor = cedula % 10;

    switch(divisor) {
        // En C, para agrupar casos se colocan uno debajo del otro
        case 0: 
        case 1:
            printf("Lunes\n");
            break;
            
        case 2: 
        case 3:
            printf("Martes\n");
            break;
            
        case 4: 
        case 5:
            printf("Miercoles\n");
            break;
            
        case 6: 
        case 7:
            printf("Jueves\n");
            break;
            
        case 8: 
        case 9: // Nota: Corregí tu pseudocódigo (decía 8, 7 en lugar de 8, 9)
            printf("Viernes\n");
            break;
            
        // El "else" de un switch en C se llama "default"
        default:
            printf("Error\n");
            break;
    }

    return 0;
}