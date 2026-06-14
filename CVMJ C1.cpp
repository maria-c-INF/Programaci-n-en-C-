#include<iostream>
#include<clocale>//C viene de C++ Y locale significa localidad o configuración regional_Librería para formatos de fechas, simbolos, tildes y eñes.
using namespace std;
int main()
{
    system("color 31");
    setlocale(LC_ALL,""); //set sig. establecer o configurar, es la función que ejecuta la acción de cambiar las reglas del idioma
    //LC es la abrev. de Locale Category y All sig. Todo. es decir que configur todas las categorias. las "" es para que c++ use la configuración del SO
    int i;
    cout<<"PROGRAMA QUE ESCRIBA LOS NÚMEROS HASTA EL 5\n";
    for(i=1;i<=5;i++)
    {
    cout<<i<<"\t";
    }
    system("pause");
}
