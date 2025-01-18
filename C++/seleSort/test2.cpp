#include <iostream>
#include <cstdlib>
#include <ctime>

#define NMAX 100

using namespace std;

void popolaVett(int vett[], int dim){
	for(int i=0; i<dim; i++)
		vett[i] = rand() % NMAX+1;
}

void output(int vett[], int dim){
	for(int i=0; i<dim; i++)
		cout<<vett[i]<<" ";
}

void ordinamento(int vett[], int dim){
	for(int i=0; i<dim; i++){
		int min=i;
		for(int j=i+1; j<dim; j++)
			if(vett[j]<vett[min])
				min=j;
				
		int temp = vett[min];
		vett[min] = vett[i];
		vett[i] = temp;
	}
}

int main(){
	int dim;
	
	cout<<"Inserisci la dimensione del vettore: ";
	do{
		cin>>dim;
		if(dim<2)
			cout<<"Errore, inserisci di nuovo: ";
	}while(dim<2);
	
	int vett[dim];
	
	srand(time(NULL));
	popolaVett(vett, dim);
	
	cout<<"\nArray prima dell'ordinamento: "<<endl;
	output(vett, dim);
	
	ordinamento(vett, dim);
	
	cout<<"\nArray dopo l'ordinamento: "<<endl;
	output(vett, dim);
	
	return 0;
}