#include<iostream>
#include<clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    int n,a,b,i,c;
    cout<<"PROGRAMA QUE CUENTE CUÁNTOS ELEMENTOS DE LA SERIE FIBONACCI SON IMPARES\n";
    cout<<"Ingrese un número por favor\n";
    cin>>n;
    a=0;
    b=1;
    i=0;
    while(b<=n)
    {
       if(b % 2!=0)
      {
        i=i+1;    
      }
      c=a+b;
      a=b;
      b=c;
    }
    cout<<"Hay "<<i<<" números impares\t";
    system("pause");
}
