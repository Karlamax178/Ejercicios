#include <iostream>
using namespace std;




int main (){
	int opcion;
	float primero=1;
	float segundo=1;
	float resultado;

	cout << "Que operacion desea realizar Suma [1] Resta [2] Multiplicacion [3] Division [4]."<< endl;
	cin >> opcion;
	cout << "Ingrese un numero: ";
	cin >> primero;
	cout << "Ingrese un numero: ";
	cin >> segundo;
	if (opcion==1){
		resultado = primero+segundo;
	}else if (opcion==2){
		resultado = primero-segundo;
	}else if (opcion==3){
		resultado = primero*segundo;
	} else if (opcion==4){
		resultado = primero/segundo;
	}

	cout << resultado;

}
