/*GARA DI ATLETCA*/

#include <iostream>
#include <iomanip>
using namespace std;

void input(float tempi[], int corsia[], string nomi[], int dim){
	int k=1;
	for(int i=0; i<dim; i++){
		cout<<"Inserisci il nome dell'atleta in corsia "<<i+1<<": ";
		cin>>nomi[i];
		cout<<"Inserisci il tempo finale di "<<nomi[i]<<": ";
		cin>>tempi[i];
		corsia[i] = k;
		k++;
	}
}

void sort(float tempi[], int corsia[], string nomi[], int dim){
	bool flag=false;
	do{
		flag = false;
		for(int i=0; i<dim-1; i++)
			if(tempi[i] > tempi[i+1]){
				float temp = tempi[i+1];
				tempi[i+1] = tempi[i];
				tempi[i] = temp;
				
				float temp2 = corsia[i+1];
				corsia[i+1] = corsia[i];
				corsia[i] = temp2;
				
				string temp3 = nomi[i+1];
				nomi[i+1] = nomi[i];
				nomi[i] = temp3;
				
				flag = true;
			}
	} while(flag==true);
}

void output(float tempi[], int corsia[], string nomi[], int dim){
	cout<<"Posizione: \t Corsia: \t Tempo: \t Nome:"<<endl;
	for(int i=0; i<dim; i++){
		cout<<i+1<<setw(20)<<corsia[i]<<setw(15)<<tempi[i]<<setw(14)<<nomi[i]<<endl;
	}
}

int main(){
	int dim;
	
	cout<<"Inserisci il numero di atleti nella batteria: ";
	do{
		cin>>dim;
		
		if(dim<=0)
			cout<<"Errore, inserisci di nuovo: ";
	} while(dim<=0);
	
	float tempi[dim];
	int corsia[dim];
	string nomi[dim];
	
	input(tempi, corsia, nomi, dim);
	
	sort(tempi, corsia, nomi, dim);
	
	output(tempi, corsia, nomi, dim);
	
	return 0;
}