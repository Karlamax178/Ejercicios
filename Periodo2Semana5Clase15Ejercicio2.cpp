#include <iostream>
using namespace std;
 
int main(){
	
    int tamano , positivo =0;
 
    cout << "Cual sera el tamaño del arreglo?"<<"\n";
    cin >> tamano;
 
    int a[tamano];
 
    cout << "Datos del arreglo: "<<"\n";
    for( int i = 0; i < tamano; i++ ) {
        
        cin >> a[i];
        if( a[i] > 0 ) 
			positivo++;
    }
 
    cout << "El arreglo tiene " << positivo << " numeros positivos" << endl;
 
}
