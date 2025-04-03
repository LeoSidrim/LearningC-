#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
//Utilizando FOR para repetição (dados não são armazenados)
int main(){
    int j;
    float salaryO, salaryN, dif;
    char cargo[50];

    cout << "Quantos funcionários serão cadastrados? " << endl;
    cin >> j;
    for (int i =0; i<j; i++){
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
    }



    return 0;
}