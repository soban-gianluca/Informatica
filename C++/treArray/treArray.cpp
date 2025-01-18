/*Leggere due array di interi di 5 posizioni ognuno dei due già ordinato in ordine crescente,
 fonderli in un nuovo array che dovrà essere anch’esso ordinato con ordine crescente.
Ad esempio array1 0,2,3,7,8 array2 1,4,5,9,12 arrayfuso 0,1,2,3,4,5,7,8,9,12.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#define TETTOMAX 100
using namespace std;

void popolaVettori(int vett1[], int vett2[], int dim1, int dim2){
	for(int i=0; i<dim1; i++)
		vett1[i] = rand() % TETTOMAX + 1;
		
	for(int i=0; i<dim2; i++)
		vett2[i] = rand() % TETTOMAX + 1;
}

void popolaVettTot(int vett1[], int vett2[], int vettTot[], int dim1, int dim2, int dimTot){
	int j=0;
	
	for(int i=0; i<dimTot; i++){
		vettTot[i] = vett1[i];
		if(i >= dim1){
			vettTot[i] = vett2[j];
			j++;
		}
	}
}

void ordinamento(int vett1[], int vett2[], int vettTot[], int dim1, int dim2, int dimTot){
	for(int i=0; i<dimTot-1; i++){
		int min = i;
		
		for(int j=i+1; j<dimTot; j++)
			if(vettTot[j] < vettTot[min])
				min = j;
				
		int temp = vettTot[i];
		vettTot[i] = vettTot[min];
		vettTot[min] = temp;
	}
	
	for(int i=0; i<dim1-1; i++){
		int min = i;
		
		for(int j=i+1; j<dim1; j++)
			if(vett1[j] < vett1[min])
				min = j;
				
		int temp = vett1[i];
		vett1[i] = vett1[min];
		vett1[min] = temp;
	}
	
	for(int i=0; i<dim2; i++){
		int min = i;
		
		for(int j=i+1; j<dim2; j++)
			if(vett2[j] < vett2[min])
				min = j;
				
		int temp = vett2[i];
		vett2[i] = vett2[min];
		vett2[min] = temp;
	}
}

void output(int vett1[], int vett2[], int vettTot[], int dim1, int dim2, int dimTot){
	cout<<"\nPrimo array: "<<endl;
	for(int i=0; i<dim1; i++)
		cout<<vett1[i]<<" ";
		
	cout<<"\nSecondo array: "<<endl;
	for(int i=0; i<dim2; i++)
		cout<<vett2[i]<<" ";
		
	cout<<"\nArray finale: "<<endl;
	for(int i=0; i<dimTot; i++)
		cout<<vettTot[i]<<" ";
}

int main(){
	int dim1, dim2;
	
	cout<<"Inserisci la quantita' di valori del primo array: ";
	do{
		cin>>dim1;
		
		if(dim1<2)
			cout<<"Errore, inserire nuovamente: ";
			
	} while(dim1<2);
	
	cout<<"Inserisci la quantita' di valori del secondo array: ";
	do{
		cin>>dim2;
		
		if(dim2<2)
			cout<<"Errore, inserire nuovamente: ";
			
	} while(dim2<2);
	
	int vett1[dim1], vett2[dim2];
	
	srand(time(NULL));
	popolaVettori(vett1, vett2, dim1, dim2);
	
	int dimTot = dim1 + dim2;
	int vettTot[dimTot];
	
	popolaVettTot(vett1, vett2, vettTot, dim1, dim2, dimTot);
	
	output(vett1, vett2, vettTot, dim1, dim2, dimTot);
	
	ordinamento(vett1, vett2, vettTot, dim1, dim2, dimTot);
	
	cout<<"\n\nArray dopo l'ordinamento: "<<endl;
	
	output(vett1, vett2, vettTot, dim1, dim2, dimTot);
	
	return 0;
}