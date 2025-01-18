/*Leggi i tempi di 5 concorrenti per due mache di una gara di sci.
Dopo la prima manche i concorrenti scendono in ordine inverso rispetto ai tempi ottenuti.
leggi i tempu della seconda manche e calcola il tempo totale, quindi visualizza il podio finale*/

#include <iostream>
#include <iomanip>
using namespace std;

void inputNomi(string nome[], const int DIM){
	for(int i=0; i<DIM; i++){
		cout<<"Inserisci il nome del "<< i+1 << "^ atleta: ";
		cin>>nome[i];
	}
}

void primaManche(string nome[], float tempi[], float totale[], const int DIM){
	cout<<"---------- \t Inizio Prima Manche \t ----------"<<endl;
	
	for(int i=0; i<DIM; i++){
		cout<<"Insersci il tempo di "<<nome[i]<<": ";
		cin>>tempi[i];
		totale[i] = tempi[i];
	}
	
}

void secondaManche(string nome[], float tempi[], float totale[], const int DIM){
	cout<<"\n---------- \t Inizio Seconda Manche \t ----------"<<endl;
	
	for(int i=DIM-1; i>=0; i--){
		cout<<"Insersci il tempo di "<<nome[i]<<": ";
		cin>>tempi[i];
		totale[i] += tempi[i];
	}
}

float trovaPrimo(float totale[], float primo, const int DIM){
	for(int i=0; i<DIM; i++){
		if(i==0)
			primo = totale[i];
			
		else if(totale[i]<primo)
			primo = totale[i];
	}
	
	return primo;
}

float trovaSecondo(float totale[], float primo, float secondo, const int DIM){
	bool enter=false;
	
	for(int i=0; i<DIM; i++){
		if(totale[i]>primo){
			if(enter==false){
				secondo = totale[i];
				enter = true;
			}
				
			else if(totale[i]<secondo)
				secondo = totale[i];
		}
	}
	
	enter = false;
	
	return secondo;
}

float trovaTerzo(float totale[], float primo, float secondo, float terzo, const int DIM){
	bool enter=false;
	
	for(int i=0; i<DIM; i++){
		if(totale[i]>secondo){
			if(enter==false){
				terzo = totale[i];
				enter = true;
			}
				
			else if(totale[i]<terzo)
				terzo = totale[i];
		}
	}
	
	return terzo;
}

void output(float totale[], string nome[], float primo, float secondo, float terzo, const int DIM){
	char c;
	
	cout<<"\n---------- \t Risultati Finali \t ----------"<<endl;
	
	for(int i=0; i<DIM; i++){
		if(totale[i]==primo)
			cout<<"\n"<<setw(35)<<nome[i]<<": "<<primo<<endl;
	}
	
	cout<<setw(40)<<"----------"<<endl;
	
	for(int i=0; i<DIM; i++){
		if(totale[i]==secondo)
			cout<<setw(20)<<nome[i]<<": "<<secondo<<endl;
	}
	
	cout<<setw(25)<<"----------"<<endl;
	
	for(int i=0; i<DIM; i++){
		if(totale[i]==terzo)
			cout<<setw(50)<<nome[i]<<": "<<terzo<<endl;
	}
	
	cout<<setw(55)<<"----------"<<endl;
	
	cout<<"\n\n Vuoi visualizzare tutti i tempi finali? s/n: ";
	cin>>c;
	
	if(c=='s' || c=='S'){
		cout<<"--------------------"<<endl;
		for(int i=0; i<DIM; i++){
			cout<<nome[i]<<": "<<totale[i]<<endl;
		}
	}
}

int main(){
	const int DIM=5;	
	
	float tempi[DIM], totale[DIM], primo, secondo, terzo;
	string nome[DIM];
	
	inputNomi(nome, DIM);
	
	primaManche(nome, tempi, totale, DIM);
	
	secondaManche(nome, tempi, totale, DIM);
	
	primo = trovaPrimo(totale, primo, DIM);
	
	secondo = trovaSecondo(totale, primo, secondo, DIM);
	
	terzo = trovaTerzo(totale, primo, secondo, terzo, DIM);
	
	output(totale, nome, primo, secondo, terzo, DIM);
	
	return 0;
}