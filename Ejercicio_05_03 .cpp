// Materia: Programación I, Paralelo 1
// Autor: Alcaro Alejandro Ochoa Segales.
// Fecha creación: 19/09/2024
// Número de ejercicio: 3
// Problema planteado: conversor de la hora
#include<iostream>
using namespace std;
int conversor(int x)
{
    int hora=0, minuto=0, segundo=0;
    hora=x/3600;
    minuto=(x-(hora*3600))/60;
    segundo=(x-(hora*3600)-(minuto*60));
    cout<<hora<<" horas"<<endl;
    cout<<minuto<<" minutos"<<endl;
    cout<<segundo<<" segundos"<<endl;
    return 0;
}
int main ()
{
    int num, conta=0;
    system("cls");
    cout<<"ingrese la cantidad de segundos que quiera"<<endl;
    cin>>num;
    conta=conversor(num);
    return 0;
}