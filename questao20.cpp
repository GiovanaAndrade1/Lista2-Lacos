//Faça	um programa que, dado um conjunto de N números, determine o menor valor, o maior valor e a soma dos valores.

# include <iostream>
using namespace std;


int Valores(int n){
    int i = 1, valor, somaMe, somaMa, soma= 0, primeirovalor;

    cout << " Informe o primeiro valor" << endl;
    cin >> primeirovalor;

    somaMa = primeirovalor; 
    somaMe = primeirovalor;

 
    while (i < n) {
        cout << "informe o" << i  + 1 << "valor" << endl;
        cin >> valor;
        soma = soma + valor;
        if (valor > somaMa){
            somaMa = valor;
        }
        else if(valor < somaMe){
            somaMe = valor;
        }
        i++;

    }
    cout << " A soma dos valores é: " << soma + primeirovalor << endl;
    cout << " O maior valor é: " << somaMa << endl;
    cout << " O menor valor é: " << somaMe << endl;
    return 0; 
}





int main(){
    int n;
    cout << "informe quantos numeros deseja digitar"<< endl;
    cin >> n;
    Valores(n);


    return 0;
}