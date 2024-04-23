/******************************************************************************


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int anos, meses, dias, total;
    
    cout<<"Informe a idade em anos: "<<endl;
    cin>> anos;
    cout<<"Informe a idade em meses: "<< endl;
    cin>> meses;
    cout<<"Informe a idade em dias: "<< endl;
    cin>> dias;
    total = (anos * 365) + (meses * 30) + dias;
    
    cout<<" A idade do beneficiário é: "<< anos<<" anos"<<", "<<meses<<" meses, "<<dias<<" dias."<<endl;
    cout<<"A idade descrita acima apenas em dias é: "<<total;
    
    return 0;
}
