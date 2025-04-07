#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
 struct funcionario
 {
    float salaryO,salaryN,dif;
    char cargo[50];
 };
float aumentoGerente(float salaryO){
    float salaryN = salaryO+(salaryO*0.1);
    return salaryN;
} 
float aumentoEngenheiro(float salaryO){
    float salaryN = salaryO+(salaryO*0.2);
    return salaryN;
}

int main (){
    char answer[1];
    funcionario fun[10];
    float custoAntes=0,custoDepois=0;
    int cont =0;int gerente = 0;int engenheiro = 0,numGE;
        for (int i=0;i<10;i++){
        cout << "Qual seu cargo? " << endl;
        cin >> fun[i].cargo;
        cout << "Qual seu salario? " << endl;
        cin >> fun[i].salaryO;
        custoAntes += fun[i].salaryO;
        if (strcmp(fun[i].cargo,"gerente") == 0){
            fun[i].salaryN = aumentoGerente(fun[i].salaryO);
            gerente++;
        } else if (strcmp(fun[i].cargo,"engenheiro") == 0){
            fun[i].salaryN = aumentoEngenheiro(fun[i].salaryO);
            engenheiro++;
        } else {
            fun[i].salaryN = fun[i].salaryO+(fun[i].salaryO*0.4);
        }
        fun[i].dif = fun[i].salaryN - fun[i].salaryO;
        custoDepois += fun[i].salaryN;
        cout << "Deseja repetir (s/n)?" << endl;
        cin >> answer;
        if (strcmp(answer,"n") ==0){
            break;
        }
        cont++;
        }
    for (int j=0;j<=cont;j++){
        cout <<"Numero: "<< j<< endl << "Nome: " << fun[j].cargo << endl;
        cout << "Seu salario antigo: " << fun[j].salaryO << endl;
        cout << "Seu salario atual: " << fun[j].salaryN << endl;
        cout << "Diferenca: " << fun[j].dif << endl; 
    }
    numGE = engenheiro + gerente;
    cout << "Numero de engenheiros e gerentes: " << numGE << endl;
    cout <<"Custo antes do aumento: " << custoAntes << endl;
    cout <<"Custo depois do aumento: " << custoDepois << endl;
    return 0;
}