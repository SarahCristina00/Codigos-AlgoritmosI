/******************************************************************************


*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calcula_distancia(float x1,float x2,float y1, float y2, float z1, float z2){
    
    float distancia = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    
    return distancia;
}

int main()
{
    float u1, u2, v1, v2, w1, w2;
    float distancia1;
    float distancia2;
    float perimetro
    cout<<"Informe as coordenadas X1, X2, Y1, Y2, Z1 e Z2 dos pontos: "<< endl;
    cin>> u1>> u2>> v1>> v2>>w1>>w2;
    distancia = calcula_distancia(u1,u2,v1,v2);
    cout<<fixed;
    cout<<"Perímetro: "<<setprecision(2)<<distancia * 3 <<endl;
    

    return 0;
}
