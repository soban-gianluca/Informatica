//Autore: Gianluca Soban
//Classe 3IA
//Data: 24.11.23
/*Es. 1 Calcolare il prodotto di due interi utilizzando solo l'operatore di addizione (+).
Ad es. 3 * 2 = 3 + 3 = 6*/

#include <iostream>
using namespace std;

int main()
{
	int num1=0, num2=0, prodotto=0;
	
	cout<<"Questo programma fa il prodotto tra due numeri interi, inserisci il primo numero: ";
	cin>>num1;
	
	cout<<"Inserisci il secondo numero: ";
	cin>>num2;
	
	for(int i=0; i<num2; i++)
		prodotto += num1;
		
	cout<<"Il prodotto e': "<<prodotto<<".";
	
	return 0;
}