#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define DIM 10

int inputScelta(){
	int scelta;
	
	cout<<"Vuoi popolare il vettore a mano o generare casualmente: 1/2: ";
	do{
		cin>>scelta;
		if(!(scelta == 1 || scelta == 2))
			cout<<"Codice errato, inserire di nuovo: ";
	} while(!(scelta == 1 || scelta == 2));
	
	return scelta;
}

void popolaVett(int scelta, int vett[]){
	srand(time(NULL));
	
	switch(scelta){
		case 1:
			for(int i=0; i<DIM; i++){
				cout<<"Inserisci il "<<i+1<<"^ numero: ";
				cin>>vett[i];
			}
			break;
			
		case 2:
			for(int i=0; i<DIM; i++)
				vett[i] = rand() % 50+1;
	}
}

void output(int vett[]){
	for(int i=0; i<DIM; i++)
		cout<<vett[i]<<" ";
}

void ordinamento(int vett[]){
	bool flag=false;
	
	do{
		flag = false;
		
		for(int i=0; i<DIM-1; i++)
			if(vett[i] > vett[i+1]){
				int temp = vett[i];
				vett[i] = vett[i+1];
				vett[i+1] = temp;
				flag = true;
			}
			
	} while(flag==true);
}

int main(){
	int vett[DIM];
	int scelta;
	
	scelta = inputScelta();
	
	popolaVett(scelta, vett);
	
	cout<<"Array attuale: "<<endl;
	
	output(vett);
	
	ordinamento(vett);
	
	cout<<"\n\nArray dopo l'ordinamento: "<<endl;
	
	output(vett);
	
	return 0;
}