#include <iostream>
#include <stdio.h>
#include <string.h>
//Codigo utilizando Classes, Métodos e Objetos
int cont =0;
int gerente = 0;int engenheiro = 0;
float custoTotalAntes = 0, custoTotalDepois = 0;
using namespace std;
 class funcionario{
    private: 
        float salaryN, salaryO;
        string cargo;
        string name;
        
    public:
    void aumento(){
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
        custoTotalDepois += salaryN;
    }

    void lerdados(){
        cout << "Insira seu nome: " << endl;
        getline(cin,name);
        cout << "Insira seu cargo: " << endl;
        cin >> cargo;
        cout << "Seu salario atual: " << endl;
        cin >> salaryO;
        custoTotalAntes += salaryO;
    }

    void exibirDados() {
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
    cout <<"Custo antes do aumento: " << custoTotalAntes << endl;
    cout <<"Custo depois do aumento: " << custoTotalDepois << endl;
    return 0;
}