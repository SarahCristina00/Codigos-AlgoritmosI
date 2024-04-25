/******************************************************************************


*******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

void imprimeCaracter(char s1[]){
    int caracteres;
    caracteres = strlen(s1);
    cout<<"A quantidade de caracteres é: "<< caracteres<<endl;
}

int main()
{
    char str[10];
    cout<<"Digite uma String: "<<endl;
    cin.getline(str,10);
    imprimeCaracter(str);

    return 0;
}

