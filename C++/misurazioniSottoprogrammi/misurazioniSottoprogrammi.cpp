//Autore: Gianluca Soban
//Classe: 3IA
//Data: 20/12/23
/*Dati in input i valori di n misurazioni, scrivi un programma che calcoli e visualizzi, usando le funzioni:
• errore assoluto: ea = (valoreMax – valoreMin)/2
L'errore assoluto e la media vengono passati come parametri ad una funzione che calcola e restituisce al main il valore relativo:
• errore relativo: er = ea/vm dove vm è la media aritmetica dei valori;
L'errore relativo viene poi passato ad un'altra funzione che calcola e restituisce al main il valore dell'errore percentuale:
• errore percentuale: et * 100.
Il main visualizza poi i 3 valori calcolati.*/

#include <iostream>
using namespace std;

float erroreRelativo(float errAss, float media){
	float errRel;
	
	errRel = errAss/media;
	
	return errRel;
}

float errorePercentuale(float errRel){
	int errPerc;
	
	errPerc = errRel * 100;
	
	return errPerc;
}

int main(){
	int n=0;
	float valore, max, min, errAss, somma=0, media, errRel, errPerc;
	
	cout<<"inserisci il numero di misurazioni effetuate: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		cout<<"inserisci la "<<i<<"^ misurazione: ";
		cin>>valore;
		
		somma+=valore;
		
		if(i==1){
			max=valore;
			min=valore;
		}
		if(valore>max)
			max=valore;
		
		if(valore<min)
			min=valore;
	}
	errAss = (max-min)/2;
	media = somma/n;
	
	errRel = erroreRelativo(errAss, media);
	errPerc = errorePercentuale(errRel);
	
	cout<<"L'errore assoluto e': "<<errAss<<"."<<endl;
	cout<<"L'errore relativo e': "<<errRel<<"."<<endl; 
	cout<<"L'errore percentuale e': "<<errPerc<<"%.";
	
	return 0;
}