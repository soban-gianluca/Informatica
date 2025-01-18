//Autore: Gianluca Soban 3IA
/*Esercizio 2: Calcolo del Determinante
Obiettivo: Scrivere un programma in C++ per calcolare il determinante di una matrice 2x2.
Descrizione:
Il programma dovrebbe:
    Chiedere all'utente di inserire gli elementi della matrice.
    Calcolare il determinante della matrice
    Stampare il determinante.*/
    
#include <iostream>
#define DIM 2
using namespace std;

void creaMatrice(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			matrice[i][j] = 0;
}

void popolaMatrice(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++){
			cout<<"Elemento [ "<<i<<" ][ "<<j<<" ]: ";
			cin>>matrice[i][j]; 
		}
}

void outputMatrice(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++){
		for(int j=0; j<DIM; j++)
			cout<<matrice[i][j]<<" ";
			
		cout<<endl;
	}
		
}

int calcolaDeterminante(int matrice[DIM][DIM]){
	int determinante=0;
	for(int i=0; i<DIM-1; i++)
		for(int j=0; j<DIM-1; j++)
			determinante += (matrice[i][i]*matrice[i][i+1]) - (matrice[j][j]*matrice[j][j+1]); 
			
	return determinante;
}

int main(){
	int matrice[DIM][DIM];
	int determinante;
	
	creaMatrice(matrice);
	
	popolaMatrice(matrice);
	
	outputMatrice(matrice);
	
	determinante = calcolaDeterminante(matrice);
	
	cout<<"Determinante: "<<determinante;
	
	return 0;
}