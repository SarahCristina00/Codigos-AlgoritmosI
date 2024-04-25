/******************************************************************************

*******************************************************************************/
#include <iostream>
#include<iomanip>
using namespace std;

void imprime_positivos(){
    int n, soma, i, cont, tam;
    
        soma = 0;
        cont = 0;
        cout<<"Informe a quantidade de números que deseja calcular: "<<endl;
        cin>>tam;
    
    for(i=0;i<tam;i++){
        
        cin>>n;
            if(n>0){
            
                soma = soma + n;
                cont++;
        }
        
    }
            if(cont == 0){
                cout<<"Nao foram informados numeros positivos"<<endl;
            }
        else{
            if(cont>0){
                cout<<fixed;
                 cout<<cont<<" numeros são positivos e a media é: "<<setprecision(2)<<(float)soma/cont<<endl;
            }
        }
}

int main()
{
    imprime_positivos();

    return 0;
}
