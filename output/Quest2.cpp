#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
// programa utilizando WHILE
int main(){
    char cargo[50], answer[1];
    float salaryO, salaryN, dif;
    while (true){
    
        cout << "Qual seu cargo? " << endl;
        cin >> cargo;
        cout << "Qual seu salario? " << endl; 
        cin >> salaryO;

        if (strcmp (cargo,"gerente")){
            salaryN = salaryO+(salaryO*0.1);
        } else if (strcmp(cargo,"engenheiro")){
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
        if (strcmp(answer,"s") != 0){
            cout << "PROGRAMA ENCERRADO";
            break;
        }

    }
    return 0;
}