// Materia: Programación I, Paralelo 1
// Autor: Alcaro Alejandro Ochoa Segales.
// Fecha creación: 19/09/2024
// Número de ejercicio: 2
// Problema planteado: fecha de cumpleaños
#include<iostream>
using namespace std;
int ages(int x, int y, int z, int a, int b, int c)
{
    int año=0, mes=0, dia=0;
    año=x-a;
    mes=y-b;
    dia=z-c;
    cout<<" usted tiene "<<año<< " años, con "<< mes << " meses y "<<dia<<" dias"<< endl;

    return 0;
}
int main ()
{
    int num, num1, num2,num3, num4, num5, conta=0;
    system("cls");
    cout<<"ingrese el año, el mes, y el día en el que se encuentra ahora"<<endl;
    cin>>num;
    cin>>num1;
    cin>>num2;
    cout<<"ingrese el año, mes y día en la que nacio respectivamente"<<endl;
    cin>>num3;
    cin>>num4;
    cin>>num5;
    conta=ages(num, num1, num2, num3, num4, num5);
    return 0;
}