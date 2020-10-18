#include <iostream>
using namespace std;

int main()
{

 /*int 10 2 3 0 -1 -2 -2

float 1 34343 -1.232

double 1.345236864824792

bool 0 = false | 1 = true

char a d f g w s*/

double numero1, numero2;
char operando;
double totale;
cout<<"numero1: ";
cin>>numero1;

cout<<"operando: ";
cin>>operando;

cout<<"numero2: ";
cin>>numero2;

if(operando=='+')
totale = numero1 + numero2;

else if(operando=='-')
totale = numero1 - numero2;

else if(operando=='*')
totale = numero1 * numero2;

else if(operando=='/')
totale = numero1 / numero2;

else
{
	cout<<"errore, operando non valido\n";
	system("pause");
	exit(1) ;
}



cout<<"Il totale e' "<<totale;

cout<<endl;
system("pause");
return 0;



}
