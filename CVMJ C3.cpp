#include<iostream>
#include<clocale>
using namespace std;
int main()
{
    system("color 17");
    setlocale(LC_ALL,"");
    int num;
    double a,b,c,Suma,Promedio;
    num=1;
    while(num!=3)
    {
       cout<<"¿Qué ejercicio desea realizar?\n";
       cout<<"1. Suma\n";
       cout<<"2. Promedio de tres números\n";
       cout<<"3. Cerrar sesión\n";
       cin>>num;
       if(num==1)
       {
          cout<<"¡Perfecto! Ingrese dos números\n";
          cin>>a;
          cin>>b;
          Suma= a+b;
          cout<<"La suma es: "<<Suma<<"\n";
       }
       else
       {
           if(num==2)
           {
              cout<<"¡Perfecto! Ingrese tres números\n";
              cin>>a;
              cin>>b;
              cin>>c;
              Promedio= (a+b+c)/3;
              cout<<"El promedio es: " <<Promedio<< "\n";
           }
           else
           {
               if(num>3)
               {
                  cout<<"Error. Debe ingresar una de las opciones\n";
               }
               else
               {
                  cout<<"Cerrando sesión...\n";
               }
           }
       }
       
    }
    system("pause");
}
