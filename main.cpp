#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    //devuelve el resultado de la suma de a y b
    return a + b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
//devuelve el resultado de la resta de a y b
    return a - b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
//devuelve el resultado de la multiplicacion de a y b
    return a * b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
//devuelve el resultado de la divicion de a y b
    return a / b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
//el if evalua si a es mayor que b para regresar a
    if (a>b)
    return a;
//si al evaluar b es mayor regresa b
    else
    return b;
}

//Devuelve el numero menor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
//el if evalua si a es menor que b para regresar a
    if (a<b)
    return a;
//si al evaluar b es menor regresa b
    else
    return b;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
//el if evalua si a es mayor que b y c para regresar a
    if (a>b & a>c)
    return a;
//el if evalua si b es mayor que a y c para regresar b
    if (b>a & b>c)
    return b;
    //el if evalua si c es mayor que a y b para regresar c
    if (c>a & c>b)
    return c;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
//establese un valor a una posicion de un arreglo
    arreglo[posicion]=valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
//regresa el valor del arreglo en la posicion dada
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int mayor = 0;
    //recorre todo el arreglo para asignar a la variable mayor el numero mayor
    for(int i=0; i<tamano; i++)
    if(arreglo[i]>mayor)
    //al tener el numero del arreglo este se evalua con el numero anterior de la variable
    //mayor, si este numero es mayor se le asigna a la variable mayor
    mayor=arreglo[i];
    return mayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int menor = arreglo[0];
    //recorre todo el arreglo para asignar a la variable menor el numero menor
    for(int i=0; i<tamano; i++)
    if(arreglo[i]<menor)
    //al tener el numero del arreglo este se evalua con el numero anterior de la variable
    //menor, si este numero es menor se le asigna a la variable menor
    menor=arreglo[i];
    return menor;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int promedio;
    int suma;
    //recorre el arreglo y va sumando los valores del arreglo en la variable suma
    for(int i=0; i<tamano; i++)
        suma=suma+arreglo[i];
    //al sumar todos los valores se divide entre el tamaño del arreglo
    promedio = suma / tamano;
    return promedio;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
