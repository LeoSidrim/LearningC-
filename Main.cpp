 #include <iostream>
 #include <stdio.h>
 #include <string.h>

 using namespace std;
 
 int main()
   {
   char cargo[50];
   float salary;
   cout << "Qual o seu cargo ?" << endl;
   cin >> cargo;
   cout << "Qual seu salario? " << endl;
   cin >> salary; 
   int salaryO = salary;
   
   if (strcmp (cargo,"gerente") == 0){
    cout << "Seu salario antigo: " << salary << endl;
    salary += (salary*0.1);
    int salaryN = salary;
    cout << "Seu novo salário e: " << salary << endl;
    float dif = salaryN - salaryO;
    cout << "Diferenca: " << dif << endl;

   } else if (strcmp(cargo,"engenheiro") == 0){
    cout << "Seu salario antigo: " << salary << endl;
    salary += (salary*0.2);
    int salaryN = salary;
    cout << "Seu novo salário e: " << salary << endl;
    float dif = salaryN - salaryO;
    cout << "Diferenca: " << dif << endl;
   }else{
    cout << "Seu salario antigo: " << salary << endl;
    salary += (salary*0.4);
    int salaryN = salary;
    cout << "Seu novo salário e: " << salary << endl;
    float dif = salaryN - salaryO;
    cout << "Diferenca: " << dif << endl;
    
   }

   }  