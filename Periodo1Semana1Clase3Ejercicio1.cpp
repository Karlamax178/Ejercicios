#include <iostream>
using namespace std;

int main(){
	int nota1, nota2, nota3;
	double prom=0;
	cout<<"Ingrese la nota 1"<<"\n";
	cin>>nota1;
	cout<<"Ingrese la nota 2"<<"\n";
	cin>>nota2;
	cout<<"Ingrese la nota 3"<<"\n";
	cin>>nota3;
	prom=(nota1+nota2+nota3)/3;
	cout<<"\n"<<"Su promedio es: "<<prom<<"\n"<<"\n";
	if (prom>=7){
		cout<<"**Has sido Promocionado**";
	}else if(prom<7 && prom>=4){
		cout<<"Regular";
	}else{
		cout<<"Ha sido Reprobado:(";
	}
}
