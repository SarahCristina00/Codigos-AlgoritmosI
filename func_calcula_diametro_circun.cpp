/******************************************************************************

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define PI 3.141592
float calcula_diametro(float raio){
    
    float diametro;
    diametro = raio*2;
    
    return diametro;
}

float calcula_circunferencia(float raio){
    float circunferencia;
    circunferencia = 2*PI*raio;
    
    return circunferencia;
}

float calcula_area(float raio){
    
    float area;
    area = PI* (pow(raio,2));
    
    return area;
}

void imprime_circunferencia(float raio){
    float diametro = calcula_diametro(raio);
    cout<<fixed<<endl;
    cout<<"O diametro do circulo é: "<< setprecision(2)<<diametro<< endl;
    float circunferencia = calcula_circunferencia(raio);
    cout<<"A circunferencia do circulo é: "<< setprecision(2)<< circunferencia<<endl;
    float area = calcula_area(raio);
    cout<<"A área do circulo é: "<<setprecision(2)<<area<<endl;
}

int main()
{
    float raio1, raio2;
    cout<<"Informe o raio de 2 circulos: "<< endl;
    cin>> raio1>>raio2;
    cout<< "Raio: "<<raio1<<endl;
    imprime_circunferencia(raio1);
    cout<< "Raio: "<<raio2<<endl;
    imprime_circunferencia(raio2);

    return 0;
}
