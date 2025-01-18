//Autore: Gianluca Soban 3IA
//Data: 09.02.24
/*Siano forniti in input 3 vettori paralleli contenenti rispettivamente:
- il numero di targa, codice alfanumerico;
- la categoria, categoria del veicolo (“M” veicoli a motore per il trasporto di persone, “N” veicoli a motore per il trasporto di merci, “O” rimorchi, ecc.) di tipo stringa;
- la velocità registrata, rilevata da un sistema di controllo del traffico.
Tali dati si riferiscono a N veicoli circolanti in un tratto di autostrada in un determinato giorno.
Facendo uso di sottoprogrammi, sviluppare le seguenti richieste:
- popolare i vettori da tastiera e visualizzarli in questo modo:
numero_targa1 categoria1 velocita1
numero_targa2 categoria2 velocita2
…
- visualizzare l’elenco dei veicoli appartenenti a una determinata categoria fornita in input;
- visualizzare la categoria e la velocità registrata del veicolo con una determinata targa (prevedi una segnalazione d’errore se tale veicolo non esiste);
- calcolare la velocità registrata massima e visualizzare la targa del veicolo;
- dato in input il limite di velocità consentita, stampare il numero di targa e l’importo della multa da pagare per ogni veicolo che ha superato il limite di velocità, calcolato secondo la seguente tabella:
    - 120 € per velocità che superano il limite di una quantità non superiore a 10 km/h;
    - 500 € per velocità che superano il limite di una quantità compresa tra 10 e 40 km/h;
    - 1500 € per velocità che superano il limite di una quantità superiore a 40 km/h.
- ordinare il vettore delle velocità in modo decrescente.

Dati per i test:
AB123CD M 120
EF456GH N 60
IL789MN N 95
OP159QR O 55*/

#include <iostream>
#include <iomanip>
using namespace std;

int veicoli(){
	int dim;
	
	cout<<"Inserisci la quantita' di veicoli: ";
	cin>>dim;
	
	return dim;
}

int calcolaMulta(float diff){
	int multa=0;
	const int TETTO1=10, TETTO2=40, MULTA1=120, MULTA2=500, MULTA3=1500;
	
	if(diff<=TETTO1)
		multa = MULTA1;
		
	else if(diff>TETTO1 && diff<=TETTO2)
		multa = MULTA2;
		
	else 
		multa = MULTA3;
		
	return multa;
}

void input(string targa[], char categoria[], float velocita[], int dim){
	for(int i=0; i<dim; i++){
		cout<<"Inserisci la targa del "<<i+1<<"^ veicolo: ";
		cin>>targa[i];
		
		cout<<"Inerisci la categoria del veicolo, 'M' veicoli a motore per il trasporto di persone, 'N' veicoli a motore per il trasporto di merci, 'O' rimorchi: ";
		cin>>categoria[i];
		
		cout<<"Inserisci la velocita' registrata: ";
		cin>>velocita[i];
	}
}

void output(string targa[], char categoria[], float velocita[], int dim){
	cout<<"Targa:"<<setw(26)<<"Categoria:"<<setw(25)<<"Velocita':"<<endl;
	
	for(int i=0; i<dim; i++){
		cout<<targa[i];
	
		cout<<setw(20)<<categoria[i];
		
		cout<<setw(25)<<velocita[i]<<endl;
	}
}	

void ricercaCategoria(string targa[], char categoria[], float velocita[], int dim){
	char ricercaCategoria;
	bool flag=false;
	char c;
	
	cout<<"\n-------------------------"<<endl;
	
	do{
		cout<<"Inserisci la categoria per effettuare una ricerca: ";
		cin>>ricercaCategoria;
		
		for(int i=0; i<dim; i++){
			if(ricercaCategoria==categoria[i]){
				cout<<targa[i];
		
				cout<<setw(20)<<categoria[i];
				
				cout<<setw(25)<<velocita[i]<<endl;
				
				flag=true;
			}
		}
		
		if(flag==false)
			cout<<"Nessun risultato per la tua ricerca."<<endl;
			
		flag = false;
		
		cout<<"Vuoi ripetere l'esecuzione? s/n: ";
		cin>>c;
	} while(c=='s' || c=='S');
}

void ricercaTarga(string targa[], char categoria[], float velocita[], int dim){
	string ricercaTarga;
	bool flag=false;
	char c;
	
	do{
		cout<<"Inserisci una targa per effettuare la ricerca: ";
		cin>>ricercaTarga;
			
		for(int i=0; i<dim; i++){
			if(ricercaTarga==targa[i]){
				cout<<targa[i];
		
				cout<<setw(20)<<categoria[i];
				
				cout<<setw(25)<<velocita[i]<<endl;
				
				flag=true;
			}
		}
		
		if(flag==false)
			cout<<"Nessun risultato per la tua ricerca."<<endl;
			
		flag = false;
		
		cout<<"Vuoi ripetere l'esecuzione? s/n: ";
		cin>>c;
	} while(c=='s' || c=='S');
}

void velocitaMassima(string targa[], char categoria[], float velocita[], int dim){
	float max=0;
	
	for(int i=0; i<dim; i++){
		if(i==0)
			max=velocita[i];
			
		else if(velocita[i]>max)
			max=velocita[i];
	}
	
	cout<<"\n------------------------- "<<endl;
	cout<<"L'auto che e' andata piu' veloce e':"<<endl;
	cout<<"Targa:"<<setw(26)<<"Categoria:"<<setw(25)<<"Velocita':"<<endl;
	
	for(int i=0; i<dim; i++){
		if(velocita[i]==max){
			cout<<targa[i];
		
			cout<<setw(20)<<categoria[i];
			
			cout<<setw(25)<<velocita[i]<<endl;
		}
	}
	
	cout<<"-------------------------"<<endl;
}

void multePerVelocita(string targa[], char categoria[], float velocita[], int dim){
	int limite, multa=0;
	float diff=0;
	
	cout<<"Inserisci il limite di velocita': ";
	cin>>limite;
	
	for(int i=0; i<dim; i++){
		if(velocita[i]>limite){
			diff = velocita[i] - limite;
			multa = calcolaMulta(diff);
			cout<<targa[i]<<"\tMulta: "<<multa<<" euro."<<endl;
		}
	}
}

void scambio(float &a, float &b){
	float temp;
	
	temp=a;
	a=b;
	b=temp;
}

void ordinamento(string targa[], char categoria[], float velocita[], int dim){
	
	cout<<"\n-------------------------"<<endl;
	cout<<"Le auto ordinate per velocita' decrescente sono: "<<endl;
	
	for(int i=0; i<dim-1; i++){
		for(int j=i+1; j<dim; j++){
			if(velocita[i] < velocita[j])
				scambio(velocita[i], velocita[j]);
		}
	}
		
	output(targa, categoria, velocita, dim);
}

int main(){
	int dim;
	
	dim = veicoli();
	
	string targa[dim];	
	char categoria[dim];
	float velocita[dim];
	
	input(targa, categoria, velocita, dim);
	
	output(targa, categoria, velocita, dim);
	
	ricercaCategoria(targa, categoria, velocita, dim);
	
	ricercaTarga(targa, categoria, velocita, dim);
	
	velocitaMassima(targa, categoria, velocita, dim);
	
	multePerVelocita(targa, categoria, velocita, dim);
	
	ordinamento(targa, categoria, velocita, dim);
	
	return 0;
}