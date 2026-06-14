#include<iostream>
#include<clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    int n,S;
    n=0;
    S=0;
    while (n!=6)
    {
          S=S+n;
          cout<<" Ingrese un número\n";
          cin>>n;
    }
    cout<<"La suma es: "<<S<<"\n";
    system("pause");
}
