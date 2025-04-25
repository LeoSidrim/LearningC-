#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
 
int cont = 0; //contador para definir tamanho maximo do método exibirDados
float custoTotalAntes = 0; //Custo total antes do aumento
class Funcionario{
  public:
    int idade;
    private:
    string nome;
    string cargo;
    double salario;
       
  public:
    void set_LerDados() {
      cout << "Digite seu nome: ";
      getline(cin,nome);
      cout << "Digite seu cargo: ";
      cin >> cargo;
      cout << "Digite seu salario: ";
      cin >> salario;
      cin.ignore();
      custoTotalAntes += salario;
      };
       string get_nome(){return this->nome;}
       string get_cargo(){return this->cargo;}
       double get_salario(){return this->salario;}; 
      

       void exibirDados(){
       cout << "Nome: " << get_nome()<< endl;
       cout << "cargo: " << get_cargo() << endl;
       cout << "salario: " << get_salario() << endl;
       };
   } ; 
   
   
 
 int main(){
   Funcionario a[10]; string answer;
   for(int i =0; i<10;i++){
   a[i].set_LerDados(); 
   cout << "Deseja repetir (s/n)?" << endl;
   cin >> answer;
   cin.ignore();
   if (answer == "n"){
     break;
  }
  cont++;
  }   
  for(int i =0; i<=cont; i++){
    a[i].exibirDados();
  }
  cout << "Custo total antes do aumento: "<< custoTotalAntes;
  
}

