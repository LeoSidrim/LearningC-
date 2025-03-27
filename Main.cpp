/*

 UFRGS - Instituto de informática - Curso de C++ - Marcelo Johann - 2004
 
 Caracteres e Cast:
 - C++ prove conversões automáticas entre os tipos de dados básicos
 - Cast especifica uma conversão explícita, precedendo um valor:
   a sintaxe velha de C é a segunite: (tipo) 
 Exercícios:
 - experimente inicializar b com 200 em vez de 80
 - declare outros tipos de dados, passe valores de um para outro, 
   e verifique quais seus valores numéricos imprimindo com cast (int)
 - tente usar cout << int(a) << endl; // e veja que também funciona
   Neste caso está sendo construído um inteiro com o valor de a.
 */

 #include <iostream>
 using namespace std;
 
 int main()
   {
   char a('X'); 
   char b = 80; 
   
   cout << "a=" << a << endl;
   cout << "b=" << b << endl;
   cout << "a=" << (int) a << endl;
   cout << "b=" << (int) b << endl;  
   }  