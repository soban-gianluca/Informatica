//Autore: Gianluca Soban 3IA
//Data: 23/01/24

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void output(int x){
	if(x==true)
		cout<<"Numero presente, i numeri erano: "<<endl;
	else
		cout<<"Numero non presente, i numeri erano: "<<endl;
}

void generaNumeri(int num){
	int DIM=10;
	int v[DIM];
	bool x;
	
	for(int i=0; i<DIM; i++){
		v[i] = rand() % 100+1;
		
		if(num==v[i])
			x=true;
		else
			x=false;		
	}
	
	output(x);
		
	for(int i=0; i<DIM; i++)
		cout<<v[i]<<";"<<endl;	
}

int main(){	
	int num;
	char c;
	
	do{
		cout<<"Inserisci un numero tra 1 e 100: ";
		cin>>num;
		
		srand(time(NULL));
		
		generaNumeri(num);
		
		cout<<"Vuoi eseguire di nuovo? s/n: ";
		cin>>c;
		
	} while(c=='s' || c=='S');
	
	
	return 0;
}