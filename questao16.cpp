# include <iostream>
using namespace std;

int VerificaIP(){
    int contImpar = 0 ; 
    int contPar = 0 ;
    int n = 0;

    for (int i = 0 ; i < 10 ; i++){
        cout << "Informe um numero"<< endl;
        cin >> n;

        if (n % 2 != 0 ){
            cout << "O numero e impar"<<endl;
            contImpar = contImpar + 1 ;
    }
    else {
        cout << "O numero e par"<< endl;
        contPar = contPar + 1 ;
    }
}
    return contImpar;
} 

int main (){
    int resultadoimpar = 0;
    int resultadopar = 0;
    resultadoimpar = VerificaIP();
    resultadopar = 10 - resultadoimpar ;
    cout << "A quantidade de numeros impares e "<< resultadoimpar << " e a quantidade de numeros pares e "<< resultadopar <<endl;
    return 0;
}