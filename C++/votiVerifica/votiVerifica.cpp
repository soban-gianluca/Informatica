//Autore: Gianluca Soban
//Data: 15.11.23
/*Vengoni dati in input i voti di una verifica di n studenti di una classe (con n dato in input),
 inseriti secondo il numero d'ordine del registro. Calcolare e determinare:
- il voto massimo e la sua posizione nel registro;
- il voto minimo e la sua posizione nel registro;
- il numero di sufficienze della classe;
- il numero di insufficienze della classe.*/

#include <iostream>
using namespace std;

int main()
{
	int studenti, voto, max=0, min=0, conta=0, contaSuff=0, contaNeg=0, posizioneMax=0, posizioneMin=0;
	
	cout<<"inserisci il numero degli studenti: ";
	cin>>studenti;
	
	for(conta=0; conta<studenti; conta++){
		
		cout<<"Inserisci il voto: ";
		cin>>voto;
		
		if(conta==0){
			max=voto;
			min=voto;
			posizioneMax=conta+1;
			posizioneMin=conta+1;
		}	
		else if(voto>max){
			max=voto;
			posizioneMax=conta+1;
		}			
		else if(voto<min){
			min=voto;
			posizioneMin=conta+1;
		}
							
		if(voto>=6)
			contaSuff++;
		else
			contaNeg++;
	}
	
	cout<<"Il voto massimo e' stato " <<max <<" dall'alnunno in " <<posizioneMax <<" posizione." <<endl;
	cout<<"Il voto minimo e' stato " <<min <<" dall'alnunno in " <<posizioneMin
	
	 <<" posizione."<<endl;
	cout<<"Ci sono stati " <<contaSuff <<" voti sufficienti." <<endl;
	cout<<"Ci sono stati " <<contaNeg <<" voti negativi.";
	
	return 0;
		
}