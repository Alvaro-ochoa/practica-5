#include <iostream>
using namespace std;
void cambio(int, int);
int main()
{
    int prod=0, monto=0;
    system("cls");
    cout << "el precio del producto"<<endl;
    cin >> prod;
    cout<<"ingrese el monto de dinero que ingresara"<<endl;
    cin>>monto;
    cambio(prod,monto);
    return 0;
}
void cambio(int prod, int monto)
{
    int sobra=monto-prod;
    int cambio1=(sobra/5);
    int cambio2=(sobra/1);
    int cambio3=(sobra/0.50);
    int cambio4=(sobra/0.20);
    int cambio5=(sobra/0.10);
    cout<<sobra<<endl;
    cout << "su cambio en total es de: " << cambio1 << " monedas de 5bs"<< endl;
    cout << "su cambio en total es de: " << cambio2 << " monedas de 1bs"<<endl;
    cout << "su cambio en total es de: " << cambio3 << " monedas de 0,50ctvs"<<endl;
    cout << "su cambio en total es de: " << cambio4 << " monedas de 0,20ctvs"<<endl;
    cout << "su cambio en total es de: " << cambio5 << " monedas de 0,10ctvs"<<endl;
}