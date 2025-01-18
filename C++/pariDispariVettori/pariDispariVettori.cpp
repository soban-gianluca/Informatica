//Autore: Gianluca Soban 3IA
//Data: 27.01.24
/*Caricare un vettore di 10 celle in modo random
e visualizzare quanti numeri sono pari e quanti sono dispari*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	const int DIM=10;	
	int v[DIM], contaPar, contaDis;
	char c;
	
	srand(time(NULL));
	
	do{
		contaPar=0, contaDis=0;
		
		for(int i=0; i<DIM; i++){
			v[i] = rand() % 100+1;
			
			if(v[i]%2==0)
				contaPar++;
			else
				contaDis++;
		}
		
		cout<<"Sono stati generati: "<<contaPar<<" numeri pari."<<endl;
		cout<<"Sono stati generati: "<<contaDis<<" numeri dispari."<<endl;
		
		cout<<"Il vettore era popolato da: "<<endl;
		
		for(int i=0; i<DIM; i++)
			cout<<"Elemento "<<i+1<<": "<<v[i]<<";"<<endl;
		
		cout<<"Vuoi ripetere l'esecuzione? s/n: ";
		cin>>c;
	} while(c=='s' || c=='S');
	
	return 0;	
}