//Autore: Gianluca Soban
//Data: 01/03/24
/*Si hanno in input 4 vettori paralleli contenenti i dati
relativi ai libri di una biblioteca:

- codiciISBN[], codice numerico di 13 cifre (senza trattini)
- titoli[], titoli dei libri (per ora non scegliere titoli
che contengono spazi tra le stringhe...

ad esempio: Emma, Persuasione, Ulisse, Heidi

- autori[], autori dei libri (indicare solo il cognome,
senza spazi)
ad esempio: Austen, Austen, Joyce, Spyri

- numeroCopie[], numero di copie disponibili
Scrivere un programma che preveda queste richieste:
a.      
gestione del prestito: dato il codice ISBN in input,
se il numero di copie è maggiore di zero effettuare il prestito decrementando
di 1 il numero di copie; se il numero di copie è uguale a zero, stampare un
messaggio per libro non disponibile;
b.      
gestione della restituzione: dato in input l’ISBN
o il titolo incrementare di 1 il numero di copie disponibili;
c.      
Stampare tutti i libri di un determinato autore,
 fornito in input.*/
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
	int nLibri;
	 	
	cout<<"Inserici il numero di libri: ";
	cin>>nLibri;
	
	string codiciISBN[nLibri], codice, titolo, autore;
	int numeroCopie[nLibri];
	string titoli[nLibri], autori[nLibri];
	bool flag=false;
	char c;
	
	for(int i=0; i<nLibri; i++){
		cout<<"Inserisci il codice ISBN del "<<i+1<<" libro: ";
		cin>>codiciISBN[i];
		
		cout<<"Inserisci il titolo: ";
		cin>>titoli[i];
		
		cout<<"Inserisci l'autore di "<<titoli[i]<<": ";
		cin>>autori[i];
		
		cout<<"Inserisci la quantita' disponibile: ";
		cin>>numeroCopie[i];
	}
	
	cout<<"\n------------------------------"<<endl;
	
	cout<<"Libri diponibili: "<<endl;
	cout<<"Codice:" <<setw(27) <<"Titolo:" <<setw(20) <<"Autore:" <<setw(20) <<"Quantita':"<<endl;
	
	for(int i=0; i<nLibri; i++){
		cout<<codiciISBN[i]<<setw(20)<<titoli[i]<<setw(20)<<autori[i]<<setw(20)<<numeroCopie[i]<<endl;
	}
	
	cout<<"\n------------------------------"<<endl;
	cout<<"Gestione del prestito."<<endl;
	do{
		cout<<"Inserisci il codice ISBN: ";
		cin>>codice;
		
		for(int i=0; i<nLibri; i++){
			if(codice==codiciISBN[i]){
				flag=true;
				
				if(numeroCopie[i]==0)
					cout<<"Libro non disponibile."<<endl;
					
				else if(numeroCopie[i]>0){
					numeroCopie[i]-=1;
					cout<<"Codice:" <<setw(27) <<"Titolo:" <<setw(20) <<"Autore:" <<setw(20) <<"Quantita':"<<endl;
					cout<<codiciISBN[i]<<setw(20)<<titoli[i]<<setw(20)<<autori[i]<<setw(20)<<numeroCopie[i]<<endl;
				}
			}
		}
		if(flag==false)
			cout<<"Codice errato o libro non presente in biblioteca."<<endl;
			
		flag=false;
		
		cout<<"Vuoi ripetere il prestito? s/n: ";
		cin>>c;
	} while(c=='s' || c=='S');
	
	
	cout<<"\n------------------------------"<<endl;
	int scelta;
	cout<<"Gestione restituzione."<<endl;
	do{
		cout<<"1. Inerisci titolo."<<endl;
		cout<<"2. Inserisci codice ISBN."<<endl;
		cout<<"Inserisci la tua scelta: ";
		do{
			cin>>scelta;
		} while(scelta<1 || scelta>2);
		
		switch(scelta){
			case 1:
				cout<<"Inserisci il titolo del libro: ";
				cin>>titolo;
				for(int i=0; i<nLibri; i++){
					if(titolo==titoli[i]){
						flag=true;
						
						numeroCopie[i]+=1;
						cout<<"Codice:" <<setw(27) <<"Titolo:" <<setw(20) <<"Autore:" <<setw(20) <<"Quantita':"<<endl;
						cout<<codiciISBN[i]<<setw(20)<<titoli[i]<<setw(20)<<autori[i]<<setw(20)<<numeroCopie[i]<<endl;
					}
				}
				if(flag==false)
					cout<<"Codice errato o libro non presente in biblioteca."<<endl;
					
				flag=false;
				
				break;
					
			case 2:
				cout<<"Inserisci il codice ISBN del libro: ";
				cin>>codice;
				for(int i=0; i<nLibri; i++){
					if(codice==codiciISBN[i]){
						flag=true;
						
						numeroCopie[i]+=1;
						cout<<"Codice:" <<setw(27) <<"Titolo:" <<setw(20) <<"Autore:" <<setw(20) <<"Quantita':"<<endl;
						cout<<codiciISBN[i]<<setw(20)<<titoli[i]<<setw(20)<<autori[i]<<setw(20)<<numeroCopie[i]<<endl;
					}
				}
				if(flag==false)
					cout<<"Codice errato o libro non presente in biblioteca."<<endl;
					
				flag=false;
					
				break;
		}
		
		cout<<"Vuoi ripetere la restituzione? s/n: ";
		cin>>c;
	} while(c=='s' || c=='S');
	
	cout<<"\n------------------------------"<<endl;
	cout<<"Ricerca per autore."<<endl;
	do{
		cout<<"Inserisci il nome di un autore per effettuare la ricerca: ";
		cin>>autore;
		
		for(int i=0; i<nLibri; i++){
			if(autore==autori[i]){
				if(flag==false)
					cout<<"Codice:" <<setw(27) <<"Titolo:" <<setw(20) <<"Autore:" <<setw(20) <<"Quantita':"<<endl;
					
				flag=true;
				
				cout<<codiciISBN[i]<<setw(20)<<titoli[i]<<setw(20)<<autori[i]<<setw(20)<<numeroCopie[i]<<endl;
			}
		}
		if(flag==false)
			cout<<"Nessun autore trovato."<<endl;
			
		flag=false;
		
		cout<<"Vuoi ripetere la ricerca? s/n: ";
		cin>>c;
	} while(c=='s' || c=='S');
	
	return 0;
}