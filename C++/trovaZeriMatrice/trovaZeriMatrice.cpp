/*Memorizzare in un array bidimensionale 10 x 10 dei numeri casuali compresi tra zero e nove,
 stamparne il contenuto e dire quanti zeri sono memorizzati all’interno dell’array */
 
#include <iostream>
#include <cstdlib>
#include <ctime>

#define DIM 10
#define NUMMAX 9

using namespace std;

void popolaMatrice(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			matrice[i][j] = rand() & NUMMAX+1;
}

void output(int matrice[DIM][DIM]){
	for(int i=0; i<DIM; i++){
		for(int j=0; j<DIM; j++)
			cout<<matrice[i][j]<<"  ";
			
		cout<<endl;
	}	
}

int trovaZeri(int matrice[DIM][DIM]){
	int zeri=0;
	
	for(int i=0; i<DIM; i++){
		for(int j=0; j<DIM; j++)
			if(matrice[i][j] == 0)
				zeri++;
		
	}
	
	return zeri;
}

int main(){
	int matrice[DIM][DIM], zeri;
	
	srand(time(NULL));
	popolaMatrice(matrice);
	
	output(matrice);
	
	zeri = trovaZeri(matrice);
	
	if(zeri==0)
		cout<<"Non sono stati trovati zeri nella matrice.";
		
	else if(zeri==1)
		cout<<"E' stato trovato "<<zeri<<" zero.";
		
	else
		cout<<"Sono stati trovati "<<zeri<<" zeri.";
		
	return 0;
}