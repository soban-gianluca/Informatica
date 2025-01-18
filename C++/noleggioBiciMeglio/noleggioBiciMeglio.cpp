/*Un servizio di noleggio moto applica la seguente tariffa:
• bicicletta : 2 €/h
• moto : 3 €/h
se si superano i 30 minuti viene addebitata l'ora intera.
Costruire un algoritmo che accetta in ingresso il tipo di veicolo noleggiato,
 l'orario iniziale e l'orario finale del noleggio, che calcola e visualizza importo da pagare.*/
 
#include <iostream>

#define PREZZOBICI 2
#define PREZZOMOTO 3

using namespace std;

float getOrari(){
	float orarioIn, orarioFin, tempo;
	
	cout << "Inserisci l'orario di inizio dell noleggio: ";
	cin >> orarioIn;
	
	cout << "Inserisci l'orario di fine noleggio: ";
	do{
		cin >> orarioFin;
		
		if(orarioFin < orarioIn)
			cout << "Orario errato. Insersci di nuovo: ";
			
	}while(orarioFin < orarioIn);
	
	tempo = orarioFin - orarioIn;
	
	float a = tempo;		//divido gli interi dai decimali
	int b = a;
	a = a - b;
	
	if(b > 0.30)
		tempo += 1;
	
	return tempo;
}

float getPrezzo(float tempo, int scelta){
	float prezzo;
	
	switch(scelta){
		case 1:
			prezzo = tempo * PREZZOBICI;
			break;
			
		case 2:
			prezzo = tempo * PREZZOMOTO;
			break;
			
		default:
			cout << "Errore, impossibile completare." << endl;
	}
	
	return prezzo;
}

int main(){
	int scelta;
	float tempo, prezzo;
	
	cout << "Premere 1. se si ha noleggiato una bicicletta. \nPremere 2. se si ha noleggiato una moto. \nInserisci la scelta: ";
	cin >> scelta;
	
	tempo = getOrari();
	
	prezzo = getPrezzo(tempo, scelta);
	
	cout << "Il tuo prezzo da pagare e': " << prezzo << " euro.";		
	
	return 0;
}