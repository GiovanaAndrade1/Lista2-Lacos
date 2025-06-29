//.11. Faça	um programa que leia e valide as seguintes informações:
  //  1. Idade: entre 0 e 150;
    //2. Salário: maior que zero;
    //3. Estado Civil: 's', 'c', 'v', 'd';

#include <iostream> 
#include <string>
using namespace std;

int VerificaIdade(){

    int idade;
    do{
        cout << "informe a sua idade"<< endl;
        cin >> idade;
        if (idade < 0 || idade > 150 ){
            cout <<"erro"<< endl;
        }
        }
        while (idade < 0 || idade > 150);
        return idade;

    }
    
int VarificaSalario(){
    int salario;
    do{
        cout <<"Informe o salário"<< endl;
        cin >> salario;
        if (salario <= 0 ){
            cout <<"erro"<< endl;
            }
    }
    while (salario <= 0);
        return salario;

}

int VerificaEstadoCivil(){
    char estadoCivil; 
    do{
        cout << "Informe seu estado civil, s para solteiro, c para casado, v para viuvo e d para divorciado"<< endl;
        cin >> estadoCivil;
        if (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v' && estadoCivil != 'd'){
            cout << "erro"<< endl;
        }
    }
        while ( estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v' && estadoCivil != 'd');
        return estadoCivil;
    
}



int main (){
    VerificaIdade();
    VarificaSalario();
    VerificaEstadoCivil();
    return 0;
}