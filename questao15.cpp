# include <iostream>
using namespace std;


int Elavado(){
    int a = 0;
    int b = 0;
    int resultado;
    cout << "Informe o primeiro e o segundo numero" <<endl;
    cin >> a >>b; 
    resultado == a;

    for (int i = 1 ; i <= b ; i++){
        resultado = resultado  * a;
    }
    cout << "O resultado da potencia e: "<< resultado << endl;
    return 0;
}


int main() {
    Elavado();

    return 0;
}