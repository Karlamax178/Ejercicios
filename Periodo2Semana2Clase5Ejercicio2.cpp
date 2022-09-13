#include <iostream>
#include<conio.h>
using namespace std;

int mayor(int x, int y, int z);

main(){
	int x, y, z;
	cout<<"Ingrese tres valores enteros: "<<"\n";
	cin>>x;
	cin>>y;
	cin>>z;
	cout<<"El numero mayor es: "<<mayor(x,y,z)<<"\n";
	getch();
}

int mayor(int x, int y, int z){
	if ((x>y)&&(x>z)) return (x);
	if ((x<y)&&(y>z)) return (y);
	if ((x<z)&&(y<z)) return (z);
	if ((x==y)&&(y==z)){
		cout<<"Los tres numeros son iguales"<<"\n";
		return (z);
	}
}
