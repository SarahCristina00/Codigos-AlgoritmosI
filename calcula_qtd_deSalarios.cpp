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
    float salario_Minimo;
    float salario_Func;
    float qtd_Salario;
    
    cout<<"Informe o valor do salário minimo: "<< endl;
    cin>> salario_Minimo;
    cout<<"Informe o salário do funcionário que deseja calcular: "<< endl;
    cin>> salario_Func;
    qtd_Salario = salario_Func/salario_Minimo;
    cout<<" O funcionário recebe " <<qtd_Salario<< " salários minimos."<<endl;

    return 0;
}
