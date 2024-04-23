/******************************************************************************


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int segundos, horas, minutos, segundo, resto;
    cout<<"Informe quantos segundos: "<<endl;
    cin>> segundos;
    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundo = resto % 60;
    
    cout<<"Total: "<< segundos<< " segundos." <<endl;
    
    cout<<" Conversão: "<< horas<< " horas, " << minutos<< " minutos, "<< segundo<<" segundos."<<endl;
    return 0;
}



  
