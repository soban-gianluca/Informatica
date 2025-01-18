//Data: 21.11.23
/*Letti in input i valori di n misurazioni (n dato in input), scrivere un programma che calcoli e stampi:
- errore assoluto
- errore relativo
- errore relativo percentuale.
	errAss = (valMax-valMin)/2;
	media = somma/n;
	errRel = errAss/media;
	errPer = errRel*100;*/

#include <iostream>
using namespace std;

void input(float misure[], int dim){
	for(int i=0; i<dim; i++){
		cout<<"Inserisci la "<<i+1<<"^ misura: ";
		cin>>misure[i];
	}
}

float calcolaErroreAssoluto(float misure[], int dim){
	float valMax, valMin;
	
	for(int i=0; i<dim; i++){
		if(i==0){
			valMax = misure[i];
			valMin = misure[i];
		}
		else if(misure[i] > valMax)
			valMax = misure[i];
		
		else if(misure[i] < valMin)
			valMin = misure[i];
	}
	
	return (valMax-valMin)/2;
}

float calcolaMedia(float misure[], int dim){
	float somma=0;
	
	for(int i=0; i<dim; i++)
		somma += misure[i];
		
	return somma/dim;
}

float calcolaErroreRelativo(float errAss, float media){
	return errAss/media;
}

float calcolaErrorePercentuale(float errRel){
	return errRel*100;
}

void output(float misure[], int dim, float errAss, float media, float errRel, float errPer){
	cout<<"Misure effettuate: "<<endl;
	for(int i=0; i<dim; i++)
		cout<<misure[i]<<"    ";
		
	cout<<"\n\nErrore assoluto: "<<errAss<<"."<<endl;
	cout<<"Media: "<<media<<"."<<endl;
	cout<<"Errore relativo: "<<errRel<<"."<<endl;
	cout<<"Errore percentuale: "<<errPer<<"."<<endl;
}

int main(){
	int dim;
	
	cout<<"Inserisci il numero di misure effettuate: ";
	cin>>dim;
	
	float misure[dim];
	
	input(misure, dim);
	
	float errAss = calcolaErroreAssoluto(misure, dim);
	
	float media = calcolaMedia(misure, dim);
	
	float errRel = calcolaErroreRelativo(errAss, media);
	
	float errPer = calcolaErrorePercentuale(errRel);
	
	output(misure, dim, errAss, media, errRel, errPer);
	
	return 0;
}