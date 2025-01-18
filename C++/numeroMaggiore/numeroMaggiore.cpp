//Autore: Gianluca Soban
//Data: 04.10.23
/* Questo programma visualizza
il numreo maggiore tra una serie
di tre numeri in imput */

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	cout<<"Inserisci il primo numero: ";
	cin>>a;
	
	cout<<"Inserisci il secondo numero:";
	cin>>b;
	
	cout<<"Inserisci il terzo numero: ";
	cin>>c;
	
	if(a>b)
	{
		if(a>c)
		cout<<a<<" e' il numero maggiore.";
		else
		cout<<c<<" e' il numero maggiore.";		
	}
	else if(b>c)
	cout<<b<<" e' il numero maggiore";
	else
	cout<<c<<" e' il numero maggiore";

return 0;			
}