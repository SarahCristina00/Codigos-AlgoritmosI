#include <iostream>
#include <cstring>
using namespace std;

void imprimeCaracter(char s1[]){
    int caracteres;
    int i, cont = 0;
    for(i = 0; s1[i]!='\0' || s1[i]==' '; i++){
        cont++;
    }
    cout<<"A quantidade de caracteres é: "<< cont<<endl;
}

int main()
{
    char str[11];
    cout<<"Digite uma String: "<<endl;
    cin.getline(str,11);
    imprimeCaracter(str);

    return 0;
}

