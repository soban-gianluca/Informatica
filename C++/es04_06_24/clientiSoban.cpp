//Autore: Gianluca Soban 3IA
/*Di un prodotto sono forniti i quantitativi venduti a n (5) clienti.
In una tabella sono presenti:
il codice del cliente;
il cognome del cliente
la quantità venduta;
la data della vendita.
Scrivere un programma, con l'utilizzo di sottoprogrammi, che esaudisca le
seguenti richieste:
- legge i dati da un file di testo e li visualizza a video [Pt. 16];
- calcola e stampa la media delle quantità vendute [Pt. 16];
- trova il cliente a cui è stata venduta la quantità massima e stampa il
suo cognome [Pt. 16];
- dato il cognome di un cliente, stampa il codice e la quantità venduta
[Pt. 16];
- data la data di vendita, visualizza i cognomi dei clienti [Pt. 18];
- memorizza le quantità vendute in un array di n elementi e lo ordina in
modo crescente [Pt. 18].*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

#define DIM 5

using namespace std;

struct Dati{
	int codice[DIM];
	string cognome[DIM];
	int quantita[DIM];
	struct data{
		string giorni[DIM];
		string mesi[DIM];
		string anni[DIM];
	}data;
}vendita;

void visualizzaDatiFile(){
	ifstream file("clienti.txt");
	string line;
	
	if(!(file.is_open()))
		cerr << "Errore nell'aprire il file." << endl;
	
	while(getline(file, line)){
		cout << line << endl;
	}
	
	file.close();
}

void getDati(){
	ifstream file("clienti.txt");
	string line;
	
	for(int i=0; i<DIM; i++){
		file >> vendita.codice[i];
		file >> vendita.cognome[i];
		file >> vendita.quantita[i];
		file >> vendita.data.giorni[i];
		file >> vendita.data.mesi[i];
		file >> vendita.data.anni[i];
	}
}

float getMediaVendite(){
	int somma=0;
	float media;
	
	for(int i=0; i<DIM; i++)
		somma += vendita.quantita[i];	
		
	return media = (float)somma / DIM;
}

int getPositionMax(){
	int max, posMax=0;
	
	
	for(int i=0; i<DIM; i++){
		if(i==0){
			max = vendita.quantita[i];
			posMax = i;
		}
			
		if(vendita.quantita[i] > max){
			max = vendita.quantita[i];
			posMax = i;
		}
	}
	
	return posMax;
}

void cercaCliente(){
	string cercaCognome;
	bool find = false;
	
	cout << "Inserisci il cognome della persona da cercare: ";
	cin >> cercaCognome;
	
	for(int i=0; i<DIM; i++)
		if(vendita.cognome[i] == cercaCognome){
			find = true;
			cout << "Cognome: " << vendita.cognome[i] << endl;
			cout << "Codice: " << vendita.codice[i] << endl;
			cout << "Quantita' venduta: " << vendita.quantita[i] << endl;
		}
		
	if(find == false)
		cout << "Cognome non trovato." << endl;
}

void ricercaPerData(){
	string ricercaData, ricercaGiorno, ricercaMese, ricercaAnno;
	bool find = false;
	
	cout << "Inserisci la data da ricercare nel formato gg/mm/aaaa: ";
	cin >> ricercaData;
	
	ricercaGiorno = ricercaData.substr(0, 2);
	ricercaMese = ricercaData.substr(3, 2);
	ricercaAnno = ricercaData.substr(6, 4);
	
	for(int i=0; i<DIM; i++){
		if(ricercaGiorno.compare(vendita.data.giorni[i]) == 0 && ricercaMese.compare(vendita.data.mesi[i]) == 0 && ricercaAnno.compare(vendita.data.anni[i]) == 0){
			cout << vendita.cognome[i] << endl;
			find = true;
		}
	}
	
	if(find == false)
		cout << "Nessuna vendita per quella data trovata." << endl;
}

void ordinaQuantitaVendita(){
	bool scambio = false;
	
	do{
		scambio = false;
		for(int i=0; i<DIM-1; i++)
		if(vendita.quantita[i] > vendita.quantita[i+1]){
			int temp = vendita.quantita[i];
			vendita.quantita[i] = vendita.quantita[i+1];
			vendita.quantita[i+1] = temp;
			scambio = true;
		}
	} while(scambio == true);
}

void outputVendite(){
	cout << "Vendite ordinate: " << endl;
	for(int i=0; i<DIM; i++){
		cout << vendita.quantita[i] << endl;
	}
}

int main(){
	float media;
	int positionMax;
	
	visualizzaDatiFile();
	
	cout << "--------------------" << endl;
	
	getDati();
	
	media = getMediaVendite();
	cout << "La media della quantita' delle vendite e': " << media << "." << endl; 
	
	cout << "--------------------" << endl;
	
	positionMax = getPositionMax();
	cout << "La persona a cui sono stati venduti piu' elementi e': " << vendita.cognome[positionMax] << " con " << vendita.quantita[positionMax] << "." << endl;
	
	cout << "--------------------" << endl;
	
	cercaCliente();
	
	cout << "--------------------" << endl;
	
	ricercaPerData();
	
	cout << "--------------------" << endl;
	
	ordinaQuantitaVendita();
	outputVendite();
	
	
	return 0;
}