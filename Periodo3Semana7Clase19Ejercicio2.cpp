#include<iostream>
#include <conio.h>
using namespace std;
int main( ) {
int n, x, C=0, cp=0;

cout<<"ingresar cantidad de numeros:";
cin>>n;
while ( C<n )
{
cout<<"Ingresar numero:"<<endl;

cin>>x;
if (x>0)
cp=cp+1;
C=C+1;
}
cout<<"la cantidad de positivos:"<< cp <<endl;
getch( );
return 0;
}
