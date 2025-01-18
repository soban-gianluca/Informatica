/*Scrivere un programma C++ che legge un vettore
di lunghezza arbitraria e stampa 1 se il vettore
contiene solo valori diversi, 0 altrimenti.*/

#include <iostream>
using namespace std;

#define DIM 5

void input(int num[]){
	for(int i=0; i<DIM; i++){
		cout<<"Inserisci il "<<i+1<<"^ numero: ";
		cin>>num[i];
	}
}

int doCheck(int num[]){
	int check;
	bool flag=false;
	for(int i=0; i<DIM; i++){
		if(num[i] == num[i+1])
			flag = true;
	}
	
	if(flag==false)
		return check = 1;
		
	else
		return check = 0;
}

int main(){
	int num[DIM];
	bool check=false;
	
	input(num);
	
	check = doCheck(num);
	
	if(check==0)
		cout<<"L'array contiene dei valori uguali."<<endl;
		
	else if(check==1)
		cout<<"L'array contiene tutti valori diversi."<<endl;
		
	cout<<"Vuoi visualizzare l'array? s/n: ";
	char c;
	cin>>c;
	if(c=='s' || c=='S'){
		for(int i=0; i<DIM; i++)
			cout<<num[i]<<" ";
	}
	
	return 0;
}