//Autore: Gianluca Soban 3IA
//Data: 06.02.24

/*I dati relativi al campionato di calcio sono memorizzati in tre vettori paralleli:
- squadre che conterrà il nome della squadra;
- serie, contenente "A" o "B"
- punti, contenente i punteggi del campionato
Scrivi un programma che preveda di:
1) visualizzare (secondo un layout personalizzato) l'elenco delle squadre di serie A;
2) data una squadra in input stampare il punteggio e la serie in cui milita; se la squadra non esiste o il nome è errato ci deve essere una segnalazione di errore;
3) cercare e stampare il nome della squadra campione di serie B.
E' possibile ampliare il programma aggiungendo filtri*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int dim;
	bool enter;
	
	string cercaSquadra;
	char cercaSerie;
	int scelta;
	
	cout<<"Inserisci il numero di squadre che vuoi inserire: ";
	do{
		cin>>dim;
	}while(dim<1);
	
	string squadra[dim];
	char serie[dim];
	int punti[dim];
	
	for(int i=0; i<dim; i++){
		cout<<"Inserisci il nome della squadra: ";
		cin>>squadra[i];
		cout<<"Inserisci la serie nella quale appartiene la squadra: ";
		cin>>serie[i];
		cout<<"Inserisci i punti in campionato della squadra: ";
		cin>>punti[i];
	}
	
	cout<<endl;
	
	for(int i=0; i<dim; i++){
		cout<<"Squadra: "<<squadra[i]<<"\tSerie: "<<serie[i]<<"\tPunti: "<<punti[i]<<endl;
	}
	
	
	do{
		cout<<"\nChe azione vuoi compiere: "<<endl;
		cout<<"1. Ricerca per Serie. "<<endl;
		cout<<"2. Ricerca per squadra. "<<endl;
		cout<<"0. Termina."<<endl;
		cout<<"Inserisci la tua scelta: "<<endl;
		do{
			cin>>scelta;
		} while(scelta<0 && scelta>2);
		
		switch(scelta){
			case 0:
				break;
				
			case 1: 
				cout<<"Inserisci la Serie in cui vuoi ricercare le squadre: ";
				cin>>cercaSerie;
				
				enter=false;
				
				for(int i=0; i<dim; i++){
					if(cercaSerie==serie[i]){
						cout<<"Squadra: "<<squadra[i]<<"\t"<<"Serie: "<<serie[i]<<"\t"<<"Punti: "<<punti[i]<<"\t"<<endl;
						enter=true;
					}	
				}
				
				if(enter==false)
					cout<<"Nessune squadra trovata."<<endl;
				
				break;
					
			case 2:
				cout<<"Inserisci il nome di una squadra: ";
				cin>>cercaSquadra;
				
				enter=false;
				
				for(int i=0; i<dim; i++){
					if(cercaSquadra==squadra[i]){
						cout<<"Squadra: "<<squadra[i]<<"\t"<<"Serie: "<<serie[i]<<"\t"<<"Punti: "<<punti[i]<<"\t"<<endl;
						enter=true;
					}	
				}
				
				if(enter==false)
					cout<<"Errore. Nessuna squadra trovata. Controllare il nome e ripetere l'inserimento."<<endl;
				
				break;
					
			default:
				cout<<"Valore errato.";
		}		
	} while(scelta!=0);
	
	return 0;
}