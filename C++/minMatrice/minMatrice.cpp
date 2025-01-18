/*Trovare l’elemento minimo di una matrice 8 per 8 e dire tutte le coordinate delle celle in cui si trova quel valore.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

#define DIM 8
#define NMAX 200

using namespace std;

void popolaMatrice(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			matrice[i][j] = rand() % NMAX + 1;
}

void outputMatrice(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++){
		for(int j=0; j<DIM; j++)
			cout << matrice[i][j] << "\t";
			
		cout << endl;
	}
}

int trovaMinimo(int matrice[DIM][DIM], int min){
	min = matrice[0][0];
	
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			if(matrice[i][j] < min)
				min = matrice[i][j];
			
	return min;
}

void getPosizioneMin(int matrice[DIM][DIM], int min, int posizioneXY[]){
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			if(matrice[i][j] == min){
				posizioneXY[0] = j+1;
				posizioneXY[1] = i+1;
			}
}

int main(){
	int matrice[DIM][DIM], min, posizioneXY[2];
	
	srand(time(NULL));
	popolaMatrice(matrice);
	
	outputMatrice(matrice);
	
	min = trovaMinimo(matrice, min);
	
	getPosizioneMin(matrice, min, posizioneXY);
	
	cout << "\nIl numero minore e': " << min << ", in posizione: " << posizioneXY[0] << "; " << posizioneXY[1] << endl;
	
	return 0;
}