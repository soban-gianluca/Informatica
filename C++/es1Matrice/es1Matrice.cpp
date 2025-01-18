//Autore: Gianluca Soban 3IA
/*Esercizio 1: Matrice Diagonale
Obiettivo: Scrivere un programma in C++ che crea una matrice diagonale e la stampa.
Descrizione:
Una matrice diagonale è una matrice in cui tutti gli elementi fuori dalla diagonale principale sono zero. Il programma dovrebbe:
    Chiedere all'utente la dimensione della matrice.
    Chiedere all'utente di inserire gli elementi della diagonale.
    Stampare la matrice risultante.*/
    
#include <iostream>
#define MAX_DIM 100
using namespace std;

void creaMatrice(int matrice[MAX_DIM][MAX_DIM], int n){
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			matrice[i][j] = 0;
}

void popolaDiagonale(int matrice[MAX_DIM][MAX_DIM], int n){
	for(int i=0; i<n; i++){
		cout<<"Elemento: [ "<<i<<" ][ "<<i<<" ]: ";
		cin>>matrice[i][i];
	}
}

void mostraMatrice(int matrice[MAX_DIM][MAX_DIM], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<matrice[i][j]<<" ";
			
		cout<<endl;
	}
}

int main(){
	int matrice[MAX_DIM][MAX_DIM];
	int n;
	
	cout<<"Inserisci la dimensione della matrice: ";
	do{
		cin>>n;
		if(n<2 || n>MAX_DIM)
			cout<<"Errore, inserisci di nuovo: ";
	}while(n<2 || n>MAX_DIM);
	
	creaMatrice(matrice, n);
	
	popolaDiagonale(matrice, n);
	
	mostraMatrice(matrice, n);
	
	return 0;
}