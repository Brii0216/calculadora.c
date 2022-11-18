#include <math.h>
#include <stdio.h>
#include<stdio_ext.h>

float calculadora(int numero1, int numero2, char op);
//ingresar el primer numero, segundo numero y la operación
//float porque es un número con coma
int main(void){
  int numero1;
  int numero2;
  char op;
  int continuar=1;
  float valor;
  do{ 
      //permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false.
        printf("Ingrese el primer número:");
        scanf("%d", &numero1);
        printf("ingrese la operación que desee:");
        __fpurge(stdin);
       //fpurge() vacía los buffers del flujo dado . Para flujos de salida esta función descarta toda salida pendiente.
        scanf("%c", &op);
        printf("Ingrese el segundo núm;ero:");
        scanf("%d", &numero2);
       // valor= calculadora(numero1, numero2, op);
        printf("El resultado es: %f \n", valor);
        //Cuando se desea imprimir un valor de tipo float o double usando la función printf() se usa el especificador %f para ambos tipos de datos. 
        printf("Si quiere hacer otra operación, ingrese 1. Si no, ingrese 0 \n");
        scanf("%d", &continuar);
    }while(continuar==1);
    //while para repetir un conjunto de operaciones hasta que se cumpla la condición especificada.
  return 0;
}
float calculadora(int numero1, int numero2, char op) {
  float resultado;
  if (op == '+') {
    resultado = numero1 + numero2;
  }
  if (op == '-') {
    resultado = numero1 - numero2;
  }
  if (op == '/' || op == ':') {
    if(numero2==0)printf("no es posible dividir por 0\n");
    else resultado = numero1 / numero2;
    //IF ELSE nos permiten determinar que acciones tomar dada o no cierta condición.
  }
  if (op == '*' || op == 'x') {
    resultado = numero1 * numero2;
  }
  return resultado;
}
