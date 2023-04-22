#include <stdio.h>

int Sumar(int sumando1, int sumando2){
  int suma;
  suma = sumando1 + sumando2;
  return suma;
}

int Resta(int r1, int r2){
  int resta;
  resta = r1 - r2;
  return resta;
}

int Producto(int p1, int p2){
  int prod;
  prod = p1 * p2;
  return prod;
}

float Division(int d1, int d2){
    float div;
    div = d1/d2;
    return div;
}

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
  float div;
  printf("Ingrese el primer numero.\n");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero.\n");
  scanf("%d",&num2);
  Menu(num1, num2);
  return 0;
}