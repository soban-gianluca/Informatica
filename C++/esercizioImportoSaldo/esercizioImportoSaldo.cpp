//Autore: Gianluca Soban
//Classe 3IA
//Data: 22.11.23
/*Inseriti una serie di importi (positivi e negativi), il cui inserimento termina quando viene inserito il numero 0,
 calcolare e visualizzare la somma dei positivi, la somma dei negativi, il saldo alla fine degli inserimenti,
  il valore minimo inserito e quello massimo. Il saldo iniziale deve essere chiesto all'inizio dell'esecuzione.*/
  
#include <iostream>
using namespace std;

int main()
{
	int i=0;
	float importo=0, saldo=0, sommaPos=0, sommaNeg=0, impMax=0, impMin=0;
	
		cout<<"Inserisci la serie di importi, termina con 0."<<endl;
	
	cout<<"Inserisci il tuo saldo iniziale: ";
	cin>>saldo;
	
	cout<<"inserisci il primo importo: ";
	cin>>importo;
	
	while(importo!=0){
			
		if(i==0){
			impMax=importo;
			impMin=importo;
		}
					
		else if(importo>impMax)
			impMax=importo;
			
		else if(importo<impMin)
			impMin=importo;
		
		if(importo>0)
			sommaPos += importo;
		else
			sommaNeg += importo;
			
		saldo += importo;
			
		i++;
		
		cout<<"Inserisci l'importo: ";
		cin>>importo;
	}
	
	cout<<"Il tuo saldo finale e' di: "<<saldo<<" euro."<<endl;
	cout<<"Hai un totale di "<<sommaPos<<" euro di entrate positive."<<endl;
	cout<<"Hai un totale di "<<sommaNeg<<" euro di uscite negative."<<endl;
	cout<<"Il valore massimo inserito e' di: "<<impMax<<" euro."<<endl;
	cout<<"Il valore minimo inserito e' di: "<<impMin<<" euro."<<endl;
	
	return 0;
}