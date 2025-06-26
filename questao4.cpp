#include <iostream>
using namespace std; 

int SomaMaiorNumero(){

    int Num = 0; 
    int i, soma = 0;
    int qnt, maior = 0, maior2 = 0, maior3 = 0  ;
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
        else if (maior2 > Num && maior2 < maior ){
            maior2 = Num;

        }
        else if ( maior3 > Num && maior3 < maior2 ){
            maior3 = Num;
        }
        soma = maior + maior2 + maior3;
        cout << " os maiores numeros digitados foram " << maior << maior2 << maior3 << endl;
        cout << soma;
        return 0;
    }

    return 0;
}

int main (){
    SomaMaiorNumero();

    return 0;
}