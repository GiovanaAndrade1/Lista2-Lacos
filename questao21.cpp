//Altere o programa de cálculo do fatorial, permitindo ao usuário calcular o fatorial várias vezes e limitando o fatorial a números inteiros positivos e menores que 16.

#include <iostream>
using namespace std;

int calculafatorial(){
    int fatorial = 0;
    char repetir = 's';
    int fatorialT = 0;

    while (repetir == 's' || repetir == 'S'){
        cout << "Digite um número inteiro positivo: ";
        cin >> fatorial;
    }

    while ( fatorial < 0 || fatorial > 16){
        cout << " Número inválido. Digite um número inteiro positivo e menor que 16: ";
        cin >> fatorial;}

    
    for ( int i = fatorial ; i > 0  ; i--){
        fatorialT = fatorialT * i ;
        

        
    }




    return 0;
}

int main(){
    return 0;
}