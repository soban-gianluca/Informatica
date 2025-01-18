//Autore: Gianluca Soban 3IA
/*Esercizio 3:
Scrivere un programma che carichi una matrice di dimensione 3X3 di numeri interi random da 1 a 20 secondo il seguente criterio:
- se il numero generato è pari lo carica nella matrice;
- se il numero generato è dispari lo sostituisce con 0.
Stampare gli elementi della matrice.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 3
#define NUM_MAX 20
using namespace std;

void caricaMatrice(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++){
			matrice[i][j] = rand() % NUM_MAX + 1;
			if(matrice[i][j] % 2 != 0)
				matrice[i][j] = 0;
		}
}

void outputMatrice(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++){
		for(int j=0; j<DIM; j++)
			cout<<matrice[i][j]<<"\t";
			
		cout<<endl;
	}
}

int main(){
	int matrice[DIM][DIM];
	
	srand(time(NULL));
	
	caricaMatrice(matrice);
	
	outputMatrice(matrice);
	
	return 0;
}