/*Scrivere un programma che crei un vettore di 100 interi contenente numeri casuali compresi tra 1-100 e calcoli alcuni dati statistici:
1) somma
2) media
3) min
4) max*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
	const int DIM=100;
	int numeri[DIM], somma=0, min, max;
	float media;
	char c;
	
	srand(time(NULL));
	
	for(int i=0; i<DIM; i++){
		numeri[i] = rand() % 99+1;
		
		if(i==0){
			max = numeri[i];
			min = numeri[i];
		}
		else if(numeri[i]>max)
			max = numeri[i];
			
		else if(numeri[i]<min)
			min = numeri[i];
			
		somma += numeri[i];
	}
	
	media = (float)somma/DIM;
	
	cout<<"La somma dei numeri generati e': "<<somma<<"."<<endl;
	cout<<"Il numero maggiore generato e': "<<max<<"."<<endl;
	cout<<"Il numero minimo generato e': "<<min<<"."<<endl;
	cout<<"La media dei numeri generati e': "<<media<<"."<<endl;
	
	cout<<"\nVuoi venere i numeri generati? s/n: ";
	cin>>c;
	
	if(c=='s' || c=='S')
		for(int i=0; i<DIM; i++){
			cout<<numeri[i]<<" ";
		}
	
	return 0;
}