/******************************************************************************

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.141592

using namespace std;

float area_circulo(float raio){
    float area;
    area = PI *pow(raio,2);
    
    return area;
}

int main()
{
    float r;
    float area;
    cout<<"Informe o raio do circulo: "<<endl;
    cin>>r;
    cout<<"O raio do circulo informado é: "<<r<<endl;
    area = area_circulo(r);
    cout<<fixed;
    cout<<"Area do círculo: "<<setprecision(2)<<area<<endl;

    return 0;
}
