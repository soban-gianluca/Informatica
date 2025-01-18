/*Realizzare un programma che permetta di applicare gli sconti applicati da un negozio. 
Nello specifico, se il prezzo degli acquisti è minore di 50€ il negozio effettuo lo sconto del 10%.
Se il prezzo degli acquisti è maggiore di 50€ e minore di 100€, il negozio effettua lo sconto del 20%. 
Se il prezzo degli acquisti è maggiore di 100€, il negozio effettua lo sconto del 30%. 
Il programma deve chiedere all’utente di inserire il prezzo relativo ai propri acquisti e mostri a schermo lo sconto ed il prezzo finale da pagare.*/

#include <iostream>
using namespace std;

int main()
{
	float prezzo, totale, sconto;
	const int PREZZO1=50, PREZZO2=100, SCONTO1=10, SCONTO2=20, SCONTO3=30;
	
	cout<<"Inserire il totale della spesa: ";
	cin>>prezzo;
	
	if(prezzo<PREZZO1)
		sconto=(prezzo*SCONTO1)/100;
	
	else if(prezzo<100)
		sconto=(prezzo*SCONTO2)/100;
		
	else
		sconto=(prezzo*SCONTO3)/100;
		
	totale=prezzo-sconto;
		
	cout<<"Il totale da pagare ammonta a: "<<totale<<" euro.";
	
	return 0;
}