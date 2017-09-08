#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int operandoA=0;//inicializamos en 0 para no tener numeros indeseables.
    int operandoB=0;//inicializamos en 0 para no tener numeros indeseables.
    system("COLOR 0A"); //letra verde y fondo negro.
    while(seguir=='s')
    {
        /*Menu de la calculadora*/

        printf("                      ###########                ###########\n");
        printf("                     #####  ######              #####  ######\n");
        printf("                    #####  * ######            #####  * ######\n");
        printf("                   #######  ########          #######  ########\n");
        printf("                   #################   ####   #################\n");
        printf("                   ### #################################### ###\n");
        printf("                   ####           TP_Laboratorio_1         ####\n");
        printf("                     #                                      #  \n");
        printf("                        1. Ingresar 1er operando (A=%d)      \n",operandoA);
        printf("                        2. Ingresar 2do operando (B=%d)      \n",operandoB);
        printf("                     #  3. Calcular la suma (A+B)           #\n");
        printf("                     #  4. Calcular la resta (A-B)          #\n");
        printf("                     #  5. Calcular la division (A/B)       #\n");
        printf("                     #  6. Calcular la multiplicacion (A*B) #\n");
        printf("                     #  7. Calcular el factorial (A!)       #\n");
        printf("                     #  8. Calcular todas las operaciones   #\n");
        printf("                     #  9. Salir                            #\n");
        printf("                      #                                    #  \n");
        printf("                      ######################################\n");
        printf("                              ####################### \n");
        printf("                                    ############# \n");
        printf("\nSeleccione una opcion: \n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            /*Llamada ingreso de A*/
            printf("Ingrese primer numero: ");
            scanf("%d",&operandoA);
            system("cls");
            break;
        case 2:
            /*Llamada ingreso de B*/
            printf("Ingrese segundo numero: ");
            scanf("%d",&operandoB);

            system("cls");
            break;
        case 3:
            /*Suma de A y B*/
            Sumar(operandoA, operandoB);
            system("pause");
            system("cls");
            break;
        case 4:
            /*Llamada Resta de A y B*/
            Restar(operandoA, operandoB);
            system("pause");
            system("cls");
            break;
        case 5:
            /*Llamada Division de A y B*/

            Dividir(operandoA, operandoB);
            system("pause");
            system("cls");

            break;
        case 6:
            /*Llamada Multiplicacion de A y B*/
            Multiplicar(operandoA, operandoB);
            system("pause");
            system("cls");
            break;
        case 7:
            /*Llamada Factorial de A*/
            Factorizar(operandoA);
            system("pause");
            system("cls");
            break;
        case 8:
            /*Llamada a funcion Suma de A y B*/
            Sumar(operandoA, operandoB);
            /*Llamada a funcion Resta de A y B*/
            Restar(operandoA, operandoB);
            /*Llamada a funcion Division de A y B*/
            Dividir(operandoA, operandoB);
            /*Llamada a funcion Multiplicacion de A y B*/
            Multiplicar(operandoA, operandoB);
            /*Llamada a funcion Factorial de A*/
            Factorizar(operandoA);
            system("pause");
            system("cls");
            break;
        case 9:
            seguir = 'n';
            break;
        default:
            /*Declaramos un default por si el usuario ingresa un numero de opcion no valido.*/
            printf("Ingresar una opcion valida.\n");
            system("pause");
            system("cls");

        }

    }
    return 0;

}
