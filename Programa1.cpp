#include<iostream>
using namespace std;
long int sumar(int numero);
int main(){
 int numero_limite;
 do{
 cout << "Ingrese un numero entero mayor de cero: ";
 cin >> numero_limite;
 if (numero_limite < 1){
 cout<<"El numero ingresado es incorrecto.\n";
 }
 } while (numero_limite < 1);
 cout<<"La sumatoria desde 1 hasta "<<numero_limite<<" es:
"<<sumar(numero_limite);
 return 0;
}
long int sumar(int numero){
 long int suma_retorno = 0;
 for(int indice = 1; indice <= numero; indice++){
 suma_retorno += indice;
 }
 return suma_retorno;
}
	