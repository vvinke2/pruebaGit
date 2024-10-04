#include<iostream>
using namespace std;
int calcular_suma(int operando1,int operando2);
int calcular_resta(int operando1,int operando2);
long int calcular_multiplicacion(int operando1,int operando2);
float calcular_division(int operando1,int operando2);
int main(){
 int numero1, numero2;
 cout<<"Ingrese primer numero entero: ";
 cin>>numero1;
 cout<<"Ingrese segundo numero entero: ";
 cin>>numero2;
 cout<<"La suma de ambos numeros es:
"<<calcular_suma(numero1,numero2)<<endl;
 cout<<"La resta de ambos numeros es:
"<<calcular_resta(numero1,numero2)<<endl;
 cout<<"La multiplicacion de ambos numeros es:
"<<calcular_multiplicacion(numero1,numero2)<<endl;
 cout<<"La division de ambos numeros es:
"<<calcular_division(numero1,numero2)<<endl;
 return 0;
}
int calcular_suma(int operando1,int operando2){
 return operando1+operando2;
}
int calcular_resta(int operando1,int operando2){
 return operando1-operando2;
}
long int calcular_multiplicacion(int operando1,int operando2){
 return operando1*operando2;
}
float calcular_division(int operando1,int operando2){
 return (float)operando1/operando2;
}
