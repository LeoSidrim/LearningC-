/* class Funcionario{ // classe funcionario 
    private:
     string nome; // Atributos da classe usuário
    string cargo;
    double salario;
    int idade;
       
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
   } ; */