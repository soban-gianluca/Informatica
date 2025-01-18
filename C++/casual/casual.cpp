/*Dati in imput N e due numeri interi, generare n numeri casuali compresi nell'intervallo.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int input(){
	int dim;
	
	cout<<"Inserisci il numero di elementi da generare: ";
	do{
		cin>>dim;
	} while(dim<1);
	
	return dim;	
}

void prelevaMinMax(int &min, int &max){
	cout<<"Inserisci il tetto minimo dei numeri da generare: ";
	cin>>min;
	cout<<"Inserisci il tetto massimo dei numeri da generare: ";
	cin>>max;
}

void popolaVett(int casual[], int min, int max, int dim){
	srand(time(NULL));
	
	int diff = max-min;
	
	for(int i=0; i<dim; i++)
		casual[i] = rand() % diff + min;
}

void output(int casual[], int dim){
	for(int i=0; i<dim; i++)
		cout<<casual[i]<<" ";
	
}

void ordinamento(int casual[], int dim){
	bool flag=false;
	do{
		flag=false;
		for(int i=0; i<dim-1; i++)
			if(casual[i] > casual[i+1]){
				int temp = casual[i];
				casual[i] = casual[i+1];
				casual[i+1] = temp;
				flag=true;
			}
	} while(flag==true);
}

int main(){
	int dim, min, max;
	
	dim = input();
	
	int casual[dim];
	
	prelevaMinMax(min, max);
	
	popolaVett(casual, min, max, dim);
	
	cout<<"Vettore generato casualmente prima dell'ordinamento: "<<endl;
	output(casual, dim);
	
	ordinamento(casual, dim);
	
	cout<<"\n\nVettore dopo l'ordinamento: "<<endl;
	output(casual, dim);
	
	return 0;
}