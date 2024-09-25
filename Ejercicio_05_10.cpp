#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>pascal(int n);
void vector<vector(vector<vector<int>>triangulo)
{
    for (vector<int>fila:triangulo) {
        {
            for(int i: fila)
            {
                cout<<i<<"\t"
            }
            cout<<endl;
        }
    }
    return 0;
}
vector<vector<int>>pascal(int n)
{
    vector<vector<int>>p;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<0; j++)
        {
            if(j==0 || j==i-1)
            {
              fila.push_back(1);
            }
            else
            {
                int valor=p[i-2][j]+p[i-2][j-1];
                fila.push_back(valor);
            }
        }
        p.push_back(fila);
    }
    return 0;
}
int main ()
{
    int n;
    system("cls");
    cout<<"ingrese un numero"<<endl;
    cin>>n;
    vector<vector<int>>pas;
    pas=pascal(n);
    imprimir(pas);
    return 0;
}