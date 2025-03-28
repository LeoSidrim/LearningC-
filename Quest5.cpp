#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct Funcionario{
    string cargo;
    float salaryO;
    float salaryN;
};


int main(){
    Funcionario fun[10];
    float dif;
    
    for (int i=0; i<10, i++){
        cout << "Qual seu cargo? " << endl;
        cin >> fun[i].cargo;
        cout << "Qual seu salario? " << endl;
        cin >> fun[i].salaryO;

        if (fun[i].cargo == "gerente"){
            fun[i].salaryN = fun[i].salaryO+(fun[i].salaryO*0.1);
        } else if (fun[i].cargo == "engenheiro"){
            fun[i].salaryN = fun[i].salaryO+(fun[i].salaryO*0.2);
        } else {
            fun[i].salaryN =fun[i]. salaryO+(fun[i].salaryO*0.4);
        }
        dif = fun[i].salaryN - fun[i].salaryO;
        cout << "Seu salario antigo: " << fun[i].salaryO << endl;
        cout << "Seu salario atual: " << fun[i].salaryN << endl;
        cout << "Diferenca: " << dif << endl;
    }

}