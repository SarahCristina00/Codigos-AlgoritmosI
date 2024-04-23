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
    
    float graus_C;
    float graus_F;
    
    cout<<"Informe o valor em Cº: "<< endl;
    cin>>graus_C;
    graus_F = (9*graus_C + 160)/5;
    cout<<"O valor em graus Fº é: "<< graus_F << endl;

    return 0;
}
