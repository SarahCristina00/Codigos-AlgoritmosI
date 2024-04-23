/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float valor;
    float desconto;
    float valor_Final;
    cout<<"Informe o valor do produto: "<< endl;
    cin>> valor;
    desconto = 0.25* valor;
    cout<< "o valor de desconto é: "<<desconto<<endl;
    valor_Final = valor -  desconto;
    cout<< "O valor com desconto é: R$ "<<valor_Final<<endl;


    return 0;
}
