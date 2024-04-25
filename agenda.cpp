/******************************************************************************


*******************************************************************************/
#include <iostream>

using namespace std;

struct horario{
    
    int hora;
    int minutos;
    int seg;
};

struct data{
    int dia;
    int mes;
    int ano;
};

struct compromisso{
    
    data dia;
    data mes;
    data ano;
    horario hora;
    horario minutos;
    horario segundos;
    char compromisso[100];
    
};

int main()
{
   
    compromisso agenda;
    
    cin>>agenda.dia.dia;
    cin>>agenda.mes.mes;
    cin>>agenda.ano.ano;
    cin>>agenda.hora.hora;
    cin>>agenda.minutos.minutos;
    cin>>agenda.segundos.seg;
    cin.ignore();
    cin.getline(agenda.compromisso, 100);
    
    cout<<"No dia "<<agenda.dia.dia<<"/"<<agenda.mes.mes<<"/"<<agenda.ano.ano<<" ";
    cout<<"as "<<agenda.hora.hora<<":"<<agenda.minutos.minutos<<":"<<agenda.segundos.seg<<" ";
    cout<<"voce tem o compromiso "<<agenda.compromisso;
    
    return 0;
}
