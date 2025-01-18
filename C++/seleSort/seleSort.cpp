//TEST SELE SORT

#include <iostream>
#include <cstdlib>
#include <ctime>

#define TETTOMAX 100

using namespace std;

void generaVett(int vett[], int dim){
	for(int i=0; i<dim; i++)
		vett[i] = (rand() % TETTOMAX) + 1;
}

void output(int vett[], int dim){
	for(int i=0; i<dim; i++)
		cout<<vett[i]<<" ";
}

void ordinamento(int vett[], int dim){
	for(int i=0; i<dim-1; i++){
		int min = i;
		for(int j=i+1; j<dim; j++)
			if(vett[j] < vett[min]) 
				min = j;
				
		int temp = vett[min];
		vett[min] = vett[i];
		vett[i] = temp;
		cout<<vett[i]<<" ";
	}
}

int main(){
	int dim;
	
	cout<<"Inserisci il numero di valori da generare: ";
	do{
		cin>>dim;
		if(dim<2)
			cout<<"Errore, inserisci di nuovo: ";
	} while(dim<2);
	
	
	int vett[dim];
	
	srand(time(NULL));
	generaVett(vett, dim);
	
	cout<<"Array prima dell'ordinamento: "<<endl;
	
	output(vett, dim);
	
	ordinamento(vett, dim);
	
	cout<<"\nArray dopo l'ordinamento: "<<endl;
	
	output(vett, dim);
	
	return 0;
}