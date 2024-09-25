// Materia: Programación I, Paralelo 1
// Autor: Alcaro Alejandro Ochoa Segales.
// Fecha creación: 19/09/2024
// Número de ejercicio: 5
// Problema planteado: numeros perfectos
#include<iostream>
using namespace std;
int MCM(int x)
{
    int cont =0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            cont+=i;
        }
    }
    cout<<cont<<" ";
    if (cont==x)
    {
        cout<<"el numero ingresado es perfecto"<<endl;
    }
    else
    {
        cout<<"el numero ingresado no es perfecto"<<endl;
    }
    return 0;
}
int main ()
{
    int num, num1, conta=0;
    system("cls");
    cout<<"ingrese un numero"<<endl;
    cin>>num;
    conta=MCM(num);
    return 0;
}