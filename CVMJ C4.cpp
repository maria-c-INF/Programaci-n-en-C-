#include<iostream>
#include<clocale>
using namespace std;
int main()
{
    system("color b1");
    setlocale(LC_ALL,"");
    int i,a;
 cout<<"MOSTRAR TODOS LOS AÑOS CUMPLIDOS\n"; 
 cout<<"Ingrese su edad por favor\n";
 cin>>a;
 for(i=1;i<=a;i++)
 {
  cout<<i<<"\t"; 
 }
  system("pause"); 
}
