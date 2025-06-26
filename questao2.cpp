using namespace std;
#include <iostream>


int Maiornumero(){
    int Num = 0; 
    int i = 0;
    int qnt, maior = 0 ;
    cout << " Informe a quantidade de numeros que você deseja digitar" << endl;
    cin >> qnt; 
    qnt = qnt - 1;

    while ( i <= qnt){
        i++;
        cout << "informe o " << i << " º numero" << endl;
        cin >> Num;
        if (Num >= maior){
            maior = Num;
        }

        }
        cout << " o maior numero digitado foi " << maior << endl;
        return 0;
    }


int main(){
    Maiornumero();

    return 0;
}