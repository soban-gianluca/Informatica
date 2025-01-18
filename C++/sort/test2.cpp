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
	bool flag=false;
	do{
		flag=false;
		
		for(int i=0; i<dim-1; i++)
			if(vett[i]>vett[i+1]){
				int temp = vett[i];
				vett[i] = vett[i+1];
				vett[i+1] = temp;
				flag=true;
			}
	}while(flag==true);
}

int main(){
	int dim;
	
	cout<<"Inserisci la dimensione del vettore: ";
	cin>>dim;
	
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