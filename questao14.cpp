#include <iostream> 
using namespace std;



int tabuada(){
    int n;
    int resultado;
    cout<< "Digite um numero"<< endl; 
    cin >> n;

    for (int i= 0; i <= 10 ; i++){

        resultado = n * i ;
        cout << i << " x " << n << "=" << resultado << endl;
    }
    return 0;
}

int main(){
    tabuada();
    return 0;
}