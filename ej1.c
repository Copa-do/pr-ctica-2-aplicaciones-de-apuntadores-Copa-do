#include <stdio.h>

int main () {
  char *ap, c, d, e;
  c = 'x';
  d = 'z';
  e = '\t';

  //Escribe el código para imprimir las direcciones de c, d y e
    
  ap = &c;
  printf("%p\n", *ap); //código para imprimir c
  // imprime el carácter de la localidad a la que apunta
  printf("Carácter: %c\n",*ap);
  // imprime el código ASCII de la localidad a la que apunta
  printf("Código ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Dirección de memoria: %d\n",ap);

  ap = &d;
  printf("%p\n", *ap); //codigo para imprimir d
  // imprime el carácter de la localidad a la que apunta
  printf("Carácter: %c\n",*ap);
  // imprime el código ASCII de la localidad a la que apunta
  printf("Código ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Dirección de memoria: %d\n",ap);

  ap = &e;
  printf("%p\n", *ap); //codigo para imprimir e
  // imprime el carácter de la localidad a la que apunta
  printf("Carácter: %c\n",*ap);
  // imprime el código ASCII de la localidad a la que apunta
  printf("Código ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Dirección de memoria: %d\n",ap);

 return 0;
}
