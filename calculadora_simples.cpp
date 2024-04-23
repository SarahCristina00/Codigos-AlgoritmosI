/******************************************************************************


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    float soma, produto, subtracao, divisao;
    
    cout<< "Informe dois numeros: ";
    cin>> num1;
    cin>> num2;
    soma = num1 + num2;
    cout<< "soma: " << soma<< endl;
    produto = num1 * num2;
    cout<< "produto: " << produto << endl;
    subtracao = num1 - num2;
    cout<< "subtracao: " << subtracao << endl;
    divisao = num1/num2;
    cout<< "divisao: " << divisao<< endl;
    

    return 0;
}
