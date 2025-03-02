// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    for (int i = 0; i < tamaño; i++) {
        if (arr[i] == valor) {
            return &arr[i]; 
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Código para buscar un número y mostrar su dirección
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    int valor; printf("numero a buscar: ");
    scanf("%d", &valor);
    int *resultado = buscarElemento(arr, tamaño, valor);
    if (resultado != NULL) {
        printf("numero encontrado en la dirección de memoria: %p\n", resultado);
    } else {
        printf("numero no encontrado en el arreglo.\n");
    return 0;
}
}
