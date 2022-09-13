#include <iostream>
using namespace std;

int main(){
	int suma=0, n;
	for ( n=1; n<=100;n++){
		if (n%2==0){
			suma+=n;
		}
	}
	cout<<"La suma de los pares es "<<suma<<"\n";
}
