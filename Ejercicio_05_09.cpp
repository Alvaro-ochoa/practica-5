// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales
// Fecha creación: 4/09/2024
// Número de ejercicio: 8
// Problema planteado: secuencia fibonacci
#include<iostream>
using namespace std;
int factorial(int);
int binomial(int, int);
int factorial(int x)
{
   int f=1;
   while (x>0)
   {
    f*=x;
    x--;
   }
   return 0;
}
int binomial(int x, int y)
{
   int xfacto=factorial(x);
   int yfacto=factorial(y);
   int factoxy=factorial(x-y);
   int resultado= xfacto/(yfacto*factoxy);
   return 0;
}
int main ()
{
    int num, num1, maximo=0, minimo=0;
    system("cls");
    cout<<"ingrese dos numeros"<<endl;
    cin>>num;
    cin>>num1;
    cout<<"su valor binomial es: "<<binomial(num,num1)<<endl;
    return 0;
}