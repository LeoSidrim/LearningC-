 #include <iostream>
 #include <stdio.h>
 #include <string.h>

 using namespace std;
 //codigo sem utilização de laços
 int main()
    {
   char cargo[50];
   float salaryN,salaryO,dif;

   cout << "Qual o seu cargo ? Digite apenas em minusculo" << endl;
   cin >> cargo;
   cout << "Qual seu salario? " << endl;
   cin >> salaryO; 
   
   if(strcmp(cargo,"gerente") == 0) {
    salaryN = salaryO + (salaryO*0.1);
   } else if (strcmp(cargo,"engenheiro") == 0){
    salaryN = salaryO + (salaryO*0.2);
   } else {
    salaryN = salaryO + (salaryO*0.4);
   }
   dif = salaryN - salaryO;
   cout << "Seu salario antigo: " << salaryO << endl;
   cout << "Seu salario atual: " << salaryN << endl;
   cout << "Diferenca: " << dif; 
   return 0;

   }  