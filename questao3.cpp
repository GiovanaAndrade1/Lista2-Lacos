#include <iostream>
using namespace std;


int SomaMedia(){
    int contador= 0 , soma, media, qnt, Num;
    cout << " informe a quantidade de numeros para retornar a soma e a media"<< endl;
    cin >> qnt;
    qnt = qnt - 1;

    while (contador <= qnt) {
        contador ++;
        cout << " Informe o " << contador << "º valor: ";
        cin >> Num;
        soma = soma + Num;
        media = soma / contador;

    }
    cout << " A soma dos numeros e: "<< soma << endl;
    cout << "a média doa numeros é: " << media << endl;

    return 0;



}


int main() {
    SomaMedia();

    return 0;
}