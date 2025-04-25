#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
//Usando laço DO-WHILE
int main (){
    char answer[1], cargo[50];
    float salaryN,salaryO,dif;
    do{
        cout << "Qual seu cargo? " << endl;
        cin >> cargo;
        cout << "Qual seu salario? " << endl;
        cin >> salaryO;

        if (strcmp(cargo,"gerente") == 0){
            salaryN = salaryO+(salaryO*0.1);
        } else if (strcmp(cargo,"engenheiro") == 0){
            salaryN = salaryO+(salaryO*0.2);
        } else {
            salaryN = salaryO+(salaryO*0.4);
        }
        dif = salaryN - salaryO;
        cout << "Seu salario antigo: " << salaryO << endl;
        cout << "Seu salario atual: " << salaryN << endl;
        cout << "Diferenca: " << dif << endl; 
        cout << "Deseja repetir (s/n)?" << endl;
        cin >> answer;

    }while(strcmp(answer,"s") == 0);
    return 0;
}