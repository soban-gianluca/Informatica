/*Data una matrice 4×4 di interi trovare la riga o la colonna con somma più alta.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

#define DIM 4
#define NUMMAX 10

using namespace std;

void popolaMatrice(int mat[DIM][DIM]){
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			mat[i][j] = rand() % NUMMAX + 1;
}

void outputMatrice(int mat[DIM][DIM]){
	for(int i=0; i<DIM; i++){
		for(int j=0; j<DIM; j++)
			cout << mat[i][j] << "  ";
			
		cout << endl;
	}
}

int getSommaMax(int mat[DIM][DIM], int &posMax){
	int somma = 0, max;
	
	for(int i=0; i<DIM; i++){
		somma = 0;
		for(int j=0; j<DIM; j++){
			somma += mat[i][j];
			
			if(j==0){
				max = somma;
				posMax = j;
			}
			
			else if(somma > max){
				max = somma;
				posMax = j;
			}
		}
	}
	
	return max;
}

int main(){
	int mat[DIM][DIM], sommaMax, posMax;
	
	srand(time(NULL));
	popolaMatrice(mat);
	
	outputMatrice(mat);
	
	sommaMax = getSommaMax(mat, posMax);
	
	cout << "\nLa somma piu' alta e': " << sommaMax << " in posizione: " << posMax + 1 << "." << endl;
	
	return 0;
}