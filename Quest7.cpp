#include <iostream>
#include <stdio.h>
#include <string.h>

int gerente = 0;int engenheiro = 0;

using namespace std;
 class funcionario{
    public: 
        float salaryN, salaryO;
        string cargo;
        string name;

    float aumento(){
        float percentual =0;
        if (cargo == "gerente"){
            percentual = 0.1;
            gerente++;
        } else if (cargo == "engenheiro"){
            percentual = 0.2;
            engenheiro++;
        } else {
            percentual = 0.4;
        }
        salaryN = salaryO + (salaryO*percentual);
    }

    void lerdados(){
        cout << "Insira seu nome: " << endl;
        getline(cin,name);
        cout << "Insira seu cargo: " << endl;
        cin >> cargo;
        cout << "Seu salario atual: " << endl;
        cin >> salaryO;
    }

    void exibirDados() const {
            cout << "Nome: " << name << endl;
            cout << "Cargo: " << cargo << endl;
            cout << "Seu salario antigo: " << salaryO << endl;
            cout << "Seu salario atual: " << salaryN << endl;
            cout << "Diferenca: " << salaryN - salaryO << endl; 
        
    }
 };


int main (){
    char answer[1];
    funcionario fun[10];
    float custoAntes=0,custoDepois=0;
    int cont =0; int numGE;
        for (int i=0;i<10;i++){
        fun[i].lerdados();
        fun[i].aumento();
        custoAntes += fun[i].salaryO;
        custoDepois += fun[i].salaryN;
        cout << "Deseja repetir (s/n)?" << endl;
        cin >> answer;
        cin.ignore();
        if (strcmp(answer,"n") ==0){
            break;
        }
        cont++;
        }
        
        
    numGE = engenheiro + gerente;
    for (int i=0;i<=cont;i++){
        fun[i].exibirDados();
    }
    cout << "Numero de engenheiros e gerentes: " << numGE << endl;
    cout <<"Custo antes do aumento: " << custoAntes << endl;
    cout <<"Custo depois do aumento: " << custoDepois << endl;
    return 0;
}