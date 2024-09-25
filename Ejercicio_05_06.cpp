#include<iostream>
#include<stdlib.h>
#include<random>
#include<time.h>
using namespace std;
bool primo(int);
void generar();

int main()
{
    return 0;
}
bool primo(int)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2; i*i<=0; i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}
void generar()
{
    srand(true(0));
    for(int i=0; i<50; i++)
    {
        int numero=(rand(0)%99)+1;
        cout<<numero;
        if (primo(numero))
        {
            cout<<"es primo "<<endl;
        }
        else
        {
            cout<<"no es primo "<<endl
        }
    }
}