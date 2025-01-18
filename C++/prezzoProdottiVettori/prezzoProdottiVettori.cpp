//Autore: Gianluca Soban 3IA
//Data: 02.02.24
/*Dati due vettori relativi a N articoli, con N chiesto in input, caricare il primo con i prezzi unitari e il secondo con le quantità.
 Calcolare successivamente il prezzo totale ed inserirlo in un terzo vettore.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int dim;
	float tot=0;
	
	cout<<"Inserisci il numeri di articoli: ";
	cin>>dim;
	
	float prezzo[dim], totale[dim];
	int quantita[dim];
	
	for(int i=0; i<dim; i++){
		cout<<"Inserisci il prezzo del "<<i+1<<"^ articolo: ";
		cin>>prezzo[i];
		cout<<"Inserisci la quanita' del "<<i+1<<"^ articolo: ";
		cin>>quantita[i];
		
		totale[i] += prezzo[i] * quantita[i];
		tot += prezzo[i] * quantita[i];
	}
	
	cout<<"I prezzi finali sono: "<<endl;
	
	for(int i=0; i<dim; i++){
		cout<<"Articolo "<<i+1<<":"<<"\t Prezzo: "<<prezzo[i]<<" euro."<<"\t Quantita': "<<quantita[i]<<"\t Subtotale: "<<totale[i]<<" euro."<<endl;
	}
	
	cout<<setw(73)<<"----------------"<<endl;
	cout<<setw(65)<<"Totale: "<<tot<<" euro.";
	
	return 0;
}