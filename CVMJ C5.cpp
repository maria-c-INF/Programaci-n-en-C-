#include<iostream>
#include<clocale>
using namespace std;
int main()
{
    system("title CVMJ C5");
    system("color 31");
    setlocale(LC_ALL,"");
    cout<<"PROGRAMA QUE SUME LOS NÚMEROS PARES E IMPARES DE LA SERIE DE LOS NÚMEROS NATURALES\n";
    int n,NP,NI,i;
    cout<<"Ingrese un número por favor\n";
    cin>>n;
    NP=0;
    NI=0;
    for(i=1;i<=n;i++)
    {
       if(i % 2 ==0)
      {
      NP=NP+i;
      }
      else
      {
      NI=NI+i;
      }
    }
    cout<<"Suma de números pares es: "<<NP<<"\n";
    cout<<"Suma de números impares es: "<<NI<<"\n";
    system("pause");
}
