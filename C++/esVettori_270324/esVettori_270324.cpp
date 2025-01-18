//Autore: Gianluca Soban 3IA
//Data: 27/03/24
/*Inserire in un vettore di n elementi una serie di valori numerici interi. Successivamente chiedere all'utente 2 valori numerici, quindi visualizzare:
- ordinare
- gli indici degli elementi del vettore compresi tra i due valori limite inseriti;
- quanti sono gli elementi sopra individuati;
- la somma degli elementi sopra individuati.

Esempio:
vettore composto dai seguenti numeri: 2  8  10  15  22  50 
numeri limite inseriti: 9 e 30
indici degli elementi compresi tra 9 e 30: 2  3  4  
somma degli elementi compresi tra 9 e 30: 47*/

#include <iostream>
using namespace std;

void popolaVett(int vett[], int dim){
	for(int i=0; i<dim; i++){
		cout<<"Inserisci il "<<i+1<<"^ valore: ";
		cin>>vett[i];
	}
}

void ordinamento(int vett[], int dim){
	for(int i=0; i<dim-1; i++){
		int min = i;
		
		for(int j=i+1; j<dim; j++)
			if(vett[min] > vett[j])
				min = j;
				
		int temp = vett[min];
		vett[min] = vett[i];
		vett[i] = temp;
	}
}

void output(int vett[], int dim){
	cout<<"Il vettore e' composto da: ";
	for(int i=0; i<dim; i++)
		cout<<vett[i]<<" ";
}

void cercaIndici(int vett[], int dim, int num1, int num2){
	cout<<"Indici degli elementi compresi tra "<<num1<<" e "<<num2<<": ";
	
	for(int i=0; i<dim; i++)
		if(vett[i] >= num1 && vett[i] <= num2)
			cout<<i<<" ";
			
}

int calcolaSomma(int vett[], int dim, int num1, int num2, int somma){
	
	for(int i=0; i<dim; i++)
		if(vett[i] >= num1 && vett[i] <= num2)
			somma += vett[i];
	
	return somma;
}

int main(){
	int dim, num1, num2, somma=0;
	
	cout<<"Inserisci il numeri di elementi da inserire: ";
	cin>>dim;
	
	int vett[dim];
	
	popolaVett(vett, dim);
	
	ordinamento(vett, dim);
	
	output(vett, dim);
	
	cout<<"\nInserisci due valori numerici: ";
	cin>>num1>>num2;
	
	cercaIndici(vett, dim, num1, num2);
	
	somma = calcolaSomma(vett, dim, num1, num2, somma);
	
	cout<<"\nLa somma degli elementi compresi tra "<<num1<<" e "<<num2<<": "<<somma<<".";
	
	return 0;
}