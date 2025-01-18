/*matrice 8x8, trovare max e posizione*/

#include <iostream>
#include <ctime>
#include <cstdlib>

#define DIM 8
#define NUMMAX 500

using namespace std;

void generaMatrice(int mat[DIM][DIM]){
	
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			mat[i][j] = rand() % NUMMAX + 1;
}

void outputMatrice(int mat[DIM][DIM]){
	for(int i=0; i<DIM; i++){
		for(int j=0; j<DIM; j++)
			cout << mat[i][j] << "\t";
			
		cout << endl;
	}
}

int getMax(int mat[DIM][DIM]){
	int max = mat[0][0];
	
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			if(mat[i][j] > max)
				max = mat[i][j];
			
	return max;
}

void getCords(int mat[DIM][DIM], int cords[], int max){
	
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			if(mat[i][j] == max){
				cords[0] = j+1;
				cords[1] = i+1;
			}
}

int main(){
	int mat[DIM][DIM], max, cords[2];
	
	srand(time(NULL));
	generaMatrice(mat);
	
	outputMatrice(mat);
	
	max = getMax(mat);
	
	getCords(mat, cords, max);
	
	cout << "--------------------" << endl;
	cout << "Il numero maggiore e': " << max << "; In posizione: " << cords[0] << ", " << cords[1] << endl;
	
	return 0;
}