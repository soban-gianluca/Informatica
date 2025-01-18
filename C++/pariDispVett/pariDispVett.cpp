/*Caricare un vettore di 10 celle in modo random
e visualizzare quanti numeri sono pari e quanti sono dispari*/

#include <iostream>
#include <cstdlib>
#include <ctime>

#define DIM 10
#define NUMMAX 100

using namespace std;

void caricaVett(int vett[]){
	for(int i=0; i<DIM; i++)
		vett[i] = rand() % NUMMAX + 1;
}

void outputVett(int vett[]){
	for(int i=0; i<DIM; i++)
		cout << vett[i] << "  ";
	
}

int getPari(int vett[]){
	int pari = 0;
	
	for(int i=0; i<DIM; i++)
		if(vett[i] % 2 == 0)
			pari++;
	
	return pari;
}

int getDispari(int vett[]){
	int dispari = 0;
	
	for(int i=0; i<DIM; i++)
		if(vett[i] % 2 != 0)
			dispari++;
	
	return dispari;
}

int main(){
	int vett[DIM], pari, dispari;
	
	srand(time(NULL));
	caricaVett(vett);
	
	outputVett(vett);
	
	pari = getPari(vett);
	dispari = getDispari(vett);
	
	cout << "\nNel vettore sono stati generati: " << pari << " numeri pari e " << dispari << " numeri dispari." << endl;
	
	return 0;
}