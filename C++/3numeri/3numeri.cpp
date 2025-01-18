/*Scrivere un programma che legge 3 numeri scrive “il maggiore è il primo” nel caso il primo numero 
sia il più grande o “il maggiore è il secondo” o “il maggiore è il terzo” nei rispettivi casi.*/

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	
	cout<<"Inserisci il primo numero: ";
	cin>>num1;
	
	cout<<"Inserisci il secondo numero: ";
	cin>>num2;
	
	cout<<"Inserisci il terzo numero: ";
	cin>>num3;
	
	if(num1>num2 && num1>num3)
		cout<<"Il primo numero e' il maggiore.";
	else if(num2>num1 && num2>num3)
		cout<<"Il secondo numero e' il maggiore.";
	else 
		cout<<"Il terzo numero e' il maggiore.";
		
	if(num1<num2 && num1<num3)
		cout<<"\nIl primo numero e' il minore.";
	else if(num2<num1 && num2<num3)
		cout<<"\nIl secondo numero e' il minore.";
	else
		cout<<"\nIl terzo numero e' il minore.";
				
	return 0;
}