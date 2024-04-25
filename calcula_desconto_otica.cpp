/******************************************************************************


*******************************************************************************/
#include <iostream>
#include<iomanip>
using namespace std;

void verifica_desconto(float preco){
    int idade;
    float desconto, valor;
    cout<<"Informe a idade do cliente: "<<endl;
    cin>>idade;
    while(idade>=0){
        
        desconto = idade%100;
        cout<<desconto<<endl;
        valor = preco - desconto;
        cout<<fixed;
        cout<<setprecision(2)<<valor<<endl;
        
            if(preco - valor>=15){
            cout<<"ANEXAR COPIA DA RECEITA MEDICA"<<endl;
            }
        cout<<"Informe a idade do cliente: "<<endl;
        cin>>idade;
        
    
    }
}

int main()
{
    float preco;
    cout<<"Informe o preço das lentes: "<<endl;
    cin>>preco;
    verifica_desconto(preco);

    return 0;
}
