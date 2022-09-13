#include <iostream>
using namespace std;

string posNeg(int num);

int main(){
	int numero;
	string cadena;
	cout<<"Por favor ingrese un numero: "<<"\n";
	cin>> numero;
	cadena=posNeg(numero);
	cout<<"~El numero es "<<cadena;
	return 0;
}
string posNeg(int num){
	string resultado;
	if (num>=0){
		resultado="positivo";
		
	}else if (num<0){
		resultado="negativo";
	}
	
	return resultado;
}


