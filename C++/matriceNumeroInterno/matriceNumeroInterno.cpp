/*Letta un array bidimensionale 9 per 9 e letto un ulteriore numero n, verificare se n è presente all’interno della matrice.*/

#include <iostream>

#define DIM 3

using namespace std;

void popolaMatrice(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++){
			cout<<"Inserisci valore [ "<<i+1<<" ][ "<<j+1<<" ]: ";
			cin>>matrice[i][j];
		}
}

void output(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++){
		for(int j=0; j<DIM; j++)
			cout<<matrice[i][j]<<"\t";
			
		cout<<endl;
	}	
}

void ricercaMatrice(int matrice[DIM][DIM]){
	int ricerca, cordx, cordy;			//cordx e y cordinate ricerca trovata
	bool trovato=false;
	
	cout<<"\nInserisci un numero che verra' cercato nella matrice: ";
	cin>>ricerca;
	
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			if(matrice[i][j] == ricerca){
				trovato=true;
				cordx=i;
				cordy=j;
			}
				
				
	if(trovato)
		cout<<"Numero trovato in posizione [ "<<cordx<<" ][ "<<cordy<<" ].";
		
	else if(trovato == false)
		cout<<"Numero non trovato.";
}

int main(){
	int matrice[DIM][DIM];
	
	popolaMatrice(matrice);
	
	output(matrice);
	
	ricercaMatrice(matrice);
	
	return 0;
}