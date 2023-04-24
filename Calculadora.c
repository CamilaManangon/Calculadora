#include <stdio.h>
#include "operaciones.h"

void Menu(int num1, int num2){
    int opc;
    printf("Menu de opciones:\n");
    printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n");
    scanf("%d",&opc);
    switch(opc){
        case 1:
        printf("La suma es: %d\n",Sumar(num1, num2));
        break;
        case 2:
        printf("La resta es: %d\n",Resta(num1, num2));
        break;
        case 3:
        printf("La multiplicacion es: %d\n",Producto(num1, num2));
        break;
        case 4:
        if(num2==0){
            printf("No se puede dividir para 0.\n");
        }else{
            printf("La division es: %.2f\n",Division(num1, num2));
        }
        break;
    }
}


int main(void) 
{
  int num1, num2;
  printf("Ingrese el primer numero.\n");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero.\n");
  scanf("%d",&num2);
  Menu(num1, num2);
  return 0;
}