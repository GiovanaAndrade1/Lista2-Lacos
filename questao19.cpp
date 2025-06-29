# include <iostream>
#include <math.h>
using namespace std;


int CalculaPrimo(){
    int n = 0;
    int resultado = 0;
    int num = 0;

    cout <<"informe a quantidade de numeros q deseja digitar"<< endl;
    cin >> n;
    while (n > 0){
        cout << "informe o numero"<< endl;
        cin >> num;

        for(int i = 0; i  <= sqrt(num) ; i ++){
            if (num % i == 0) {
                resultado == i;
                cout<< " Os numeros primos são"<< resultado << endl;   
                }
            }
   
    }
         return 0;

    }



int main() {
    int resultado = CalculaPrimo();
    cout << "o resultado e "<< resultado << endl;
    return 0;
}