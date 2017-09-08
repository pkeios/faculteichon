#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/*Funcion que realiza la suma de A y B*/
int Sumar(int num0, int num1)
{
    printf("\n3.La Suma es %d \n",num0 + num1);
    return 0;
}
/*Funcion que realiza la resta de A y B*/
int Restar(int num0, int num1)
{
    printf("\n4.La Resta es %d \n",num0 - num1);
    return 0;
}
/*Funcion que realiza la division de A y B*/
float Dividir(int num0, int num1)
{
    if(num1 == 0) //corroboramos que no se divida por 0 ya que no esta definido.
    {
        printf("\n La siguiente operacion no se puede realizar ya que la division por 0 esta indefinida.Ingresar operandoB Distinto de 0\n");

    }
    else
    {
        printf("\n5.La Division es %.2f \n",(float)num0 / num1);
        return 0;
    }
}
/*Funcion que realiza la multiplicacion de A y B*/
int Multiplicar(int num0, int num1)
{
    printf("\n6.La Multiplicacion es %d \n \n",num0 * num1);
    return 0;
}
/*Funcion que realiza el factorial de A*/
long long int Factorizar(int num0)
{
    long long int fact = 1;/*utilizamos long long int ya que los resultados de numeros mayores a 10 son numeros grandes, de todos modos si se pone un numeero muy grando por ejemplo 200 con long long ya no se puede representar.*/
    int i;
    if(num0<0) /*corroboramos que el numero ingresado a la funcion no sea negativo*/
    {
        printf("\nEl factorial de un numero negativo no puede ser calculado\n");
    }
    else
    {
        for (i = 1; i<= num0; i++)
        {
            fact = fact * i; /*acumulamos el factorial*/
        }
        printf("7.Factorial de %d = %lld\n\n", num0, fact); /*resultado del factorial*/
    }
    return 0;


}
