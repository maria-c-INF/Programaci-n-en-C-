#include<iostream>
#include<clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    int num,A,B,i;
    cout<<"PROGRAMA QUE IMPRIMA LA SERIE 0101\n";
    cout<<"Ingrese un número por favor\n";
    cin>>num;
    A=0;
    B=1;
    for(i=1;i<=num;i++)
    {
      if(i%2==0)
      {
      cout<<B<<"\t";
      }           
      else
      {
      cout<<A<<"\t";
      }    
    }
    system("pause");
}
