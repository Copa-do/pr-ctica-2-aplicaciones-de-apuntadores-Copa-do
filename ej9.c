// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tamaño) {
    int suma = 0;

    for (int i = 0; i < tamaño; i++) {
        suma += *(arr + i);  
    }
    
    return suma;  
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};

    printf("La suma de los elementos del arreglo es: %d\n", sumaArreglo(numeros, 5));

    for(int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i + 1, *(numeros + i));
    }
    
    return 0;
}
