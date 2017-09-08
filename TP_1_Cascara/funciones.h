#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief realiza la suma de 2 entreros
 *
 * \param num0 (Es el primer dato ingresado - operandoA )
 * \param num1 (Es el segundo dato ingresado - operandoB)
 * \return la suma de los numeros los numeros ingresados
 *
 */
int Sumar(int num0,int num1);//Prospecto funcion Sumar

/** \brief resta de 2 entreros
 *
  * \param num0 (Es el primer dato ingresado - operandoA )
 * \param num1 (Es el segundo dato ingresado - operandoB)
 * \return la resta de los numeros ingresados
 *
 */
int Restar(int num0,int num1);//Prospecto funcion Restar

/** \brief Divide 2 entreros
 *
 * \param num0 (Es el primer dato ingresado - operandoA)
 * \param num1 (Es el segundo dato ingresado  - operandoB)
 * \return la division en float de los numeros ingresados
 * \throw la division no se realiza si el segundo valor es igual a 0 (num1) y arroja mensaje de error
 */
float Dividir(int num0, int num1);//Prospecto funcion Dividir

/** \brief multiplica 2 entreros
 *
 * \param num0 (Es el primer dato ingresado - operandoA)
 * \param num1 (Es el segundo dato ingresado  - operandoB)
 * \return la multiplicacion de los numeros ingresados
 *
 */
int Multiplicar(int num0,int num1);//Prospecto funcion Multiplicar

/** \brief calcula el factorial del numero ingresado (!operandoA)
 *
 * \param num0 (Es el primer dato ingresado - operandoA)
 * \param
 * \return el valor en long long int de !operandoA ya que al realizar operaciones de multiplicacion al incrementar el valor de operandoA se hace dificil representar los resultados en pocas cifras.
 *
 */
long long int Factorizar(int num0);//Prospecto funcion Factorizar


#endif // FUNCIONES_H_INCLUDED

