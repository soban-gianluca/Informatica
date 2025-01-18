//Autore: Gianluca Soban 3IA
//Data: 27.01.24
/*Realizza un programma che converte un numero binario in decimale*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int dim, somma;
	char c;
	
	do{
	
		cout<<"Inerisci il numero di cifre binarie da inserire: ";
		cin>>dim;
		
		int v[dim], esp=dim-1;
		
		cout<<"Inserisci la cifra decimale dalla piu' significativa."<<endl;
		
		for(int i=0; i<dim; i++){
			cout<<"Inserisci il "<<i+1<<"^ elemento: ";
			cin>>v[i];
		}
		
		cout<<"Il tuo numero: ";
		
		for(int i=0; i<dim; i++)
			cout<<v[i];
		
		somma=0;
		
		for(int i=0; i<dim; i++){
			
			v[i] *= pow(2, esp);
			somma += v[i];
				
			esp--;
		}	
		
		cout<<"\nConvertito in decimale e' pari a: "<<somma<<"."<<endl;
		
		cout<<"\nVuoi ripetere l'esecuzione? s/n: ";
		cin>>c;
	
	} while(c=='s' || c=='S');
	
	return 0;
}
                                                          