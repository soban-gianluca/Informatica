/*Data una matrice 4×4 di interi trovare la riga o la colonna con somma più alta.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

#define DIM 4
#define NUMMAX 9

using namespace std;

void popolaMatrice(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			matrice[i][j] = rand() % NUMMAX + 1;
}

void output(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++){
		for(int j=0; j<DIM; j++)
			cout<<matrice[i][j]<<"  ";
			
		cout<<endl;
	}
		
}

int getSommaRigaMax(int matrice[DIM][DIM], int &x){
	int sommaRiga, j=0, max=0;
	
	for(int i=0; i<DIM; i++){
		sommaRiga=0;
		for(int j=0; j<DIM; j++)
			sommaRiga += matrice[i][j];
			
		if(i==0){
			max=sommaRiga;
			x=i;
		}
			
			
		if(sommaRiga>max){
			max=sommaRiga;
			x=i;
		}
	}
		
	return max;	
}

int getSommaColonnaMax(int matrice[DIM][DIM], int &y){
	int sommaColonna, j=0, max=0;
	
	for(int j=0; j<DIM; j++){
		sommaColonna=0;
		for(int i=0; i<DIM; i++)
			sommaColonna += matrice[i][j];
			
		if(j==0){
			max=sommaColonna;
			y=j;
		}
			
			
		if(sommaColonna>max){
			max=sommaColonna;
			y=j;
		}
	}
		
	return max;
}

int main(){
	int matrice[DIM][DIM], sommaRiga, sommaColonna, x=0, y=0;
	
	srand(time(NULL));
	popolaMatrice(matrice);
	
	output(matrice);
	
	sommaRiga = getSommaRigaMax(matrice, x);
	sommaColonna = getSommaColonnaMax(matrice, y);
	
	cout<<"\nLa riga con la somma piu' alta di "<<sommaRiga<<" e' la numero "<<x+1<<"."<<endl;
	cout<<"La colonna con la somma piu' alta di "<<sommaColonna<<" e' la numero "<<y+1<<".";
	
	return 0;
}