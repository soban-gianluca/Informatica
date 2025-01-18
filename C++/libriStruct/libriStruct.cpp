/*Si crei la struttura libro, in cui ogni libro ha un codice numerico (numero intero) 
che lo caratterizza, un numero di pagine, titolo e un costo.
Si memorizzino i dati di tre libri e si calcoli il costo medio per pagina dei libri 
e si stampino i dati dei tre libri in ordine crescente di costo per pagina.*/

#include <iostream>
#include <string>

#define DIM 100

using namespace std;

struct Dati{
	string titolo[DIM];
	int codice[DIM];
	float pagine[DIM];
	float costo[DIM];
}libro;

void inserisciLibri(int n){
	
	for(int i=0; i<n; i++){
		cin.ignore();
		cout << "Inserisci il titolo del " << i+1 << "^ libro: ";
		getline(cin, libro.titolo[i]);
		cout << "Inserisci il codice di " << libro.titolo[i] << ": ";
		cin >> libro.codice[i];
		cout << "Inserisci il numero di pagine di " << libro.titolo[i] << ": " << endl;
		cin >> libro.pagine[i];
		cout << "Inserisci il costo di " << libro.titolo[i] << ": " << endl;
		cin >> libro.costo[i];
	}
}

void outputLibri(int n){
	
	for(int i=0; i<n; i++){
		cout << "--------------------" << endl;
		cout << "Titolo: \t " << libro.titolo[i] << "." << endl;
		cout << "Codice: \t " << libro.codice[i] << "." << endl;
		cout << "N. pagine: \t " << libro.pagine[i] << "." << endl;
		cout << "Costo: \t " << libro.costo[i] << "euro." << endl;
	}

}

void getCostoPerPagina(int n, float costoPagina[]){
	
	for(int i=0; i<n; i++){
		costoPagina[i] = libro.costo[i] / libro.pagine[i];
	}
}

void outputCostoPagina(int n, float costoPagina[]){
	cout << "--------------------" << endl;
	for(int i=0; i<n; i++){
		cout << "Titolo: " << libro.titolo[i] << ": \t Costo per pagina: " << costoPagina[i] << "." << endl;
	}
}

int main(){
	int n;
	
	cout << "Inserisci il numero di libri da inserire: ";
	do{
		cin >> n;
		
		if(n<0)
			cout << "Errore, inserisci di nuovo: ";
			
	}while(n<0);
	
	inserisciLibri(n);
	
	outputLibri(n);
	
	float costoPagina[n];
	
	getCostoPerPagina(n, costoPagina);
	
	outputCostoPagina(n, costoPagina);
	
	return 0;
}