//Autore: Gianluca Soban 3IA
//Data: 09.02.24
/*Si svolge una gara di ciclismo con N concorrenti. Ogni concorrente è identificato dal numero di maglia (che corrisponde all'indice delvettore). Creare un vettore con i tempi di arrivo.
Finita la gara si vuole conoscere:
- il tempo impiegato da un ciclista di cui si fornisce il numero di maglia
- il numero di maglia e il tempo del ciclista arrivato primo
- il numero di maglia e il tempo del ciclista arrivato ultimo.
- dato in input il tempo di un ciclista visualizzare il suo numero di maglia e interromere la ricerca non appena è stato trovato (con il flag e non con il break!!!)*/

#include <iostream>
using namespace std;

int concorrenti(){
	int dim;
	
	cout<<"Inserisci il numeri di concorrenti: ";
	cin>>dim;
	
	return dim;
}

void input(float &primo, float &ultimo, float tempiArrivo[], int dim){
	
	for(int i=0; i<dim; i++){
		cout<<"Inserisci il tempo del concorrente con il numeri di maglia "<<i<<": ";
		cin>>tempiArrivo[i];

		if(i==0){
			primo = tempiArrivo[i];
			ultimo = tempiArrivo[i];
		}
		else if(tempiArrivo[i]<primo)
			primo = tempiArrivo[i];

		else if(tempiArrivo[i]>ultimo)
			ultimo = tempiArrivo[i];
	}
	
}

void primoUltimo(float primo, float ultimo, float tempiArrivo[], int dim){
	for(int i=0; i<dim; i++){
		if(tempiArrivo[i]==primo)
			cout<<"Il ciclista arrivato primo ha il numero di maglia "<<i<<" con un tempo di "<<tempiArrivo[i]<<"."<<endl;

		else if(tempiArrivo[i]==ultimo)
			cout<<"Il ciclista arrivato ultimo ha il numero di maglia "<<i<<" con un tempo di "<<tempiArrivo[i]<<"."<<endl;
	}
}

void ricercaPerMaglia(float tempiArrivo[], int dim){
	int ricercaMaglia;
	char c;
	bool find=false;
	
	do{
	
		cout<<"Inserisci un numeri di maglia per iniziare la ricerca: ";
		cin>>ricercaMaglia;
	
		do{
	        for(int i=0; i<dim; i++){
				if(ricercaMaglia==i){
					find=true;
					cout<<"L'atleta con la maglia numero "<<ricercaMaglia<<" ha un tempo di "<<tempiArrivo[i]<<"."<<endl;
				}
			}
			if(find==false){
	            cout<<"Nessun risultato per la tua ricerca."<<endl;
	            find=true;
	        }
		} while(find==false);
		
		find=false;
		
		cout<<"Vuoi ripetere la ricerca? s/n: ";
	    cin>>c;

	} while(c=='s' || c=='S');	
}

void ricercaPerTempo(float tempiArrivo[], int dim){
	float ricercaTempo;
	char c;
	bool find=false;
	
	do{
	
		cout<<"Inserisci un tempo per iniziare la ricerca: ";
		cin>>ricercaTempo;
	
		do{
			for(int i=0; i<dim; i++){
				if(ricercaTempo==tempiArrivo[i]){
					find=true;
					cout<<"L'atleta con il tempo di "<<ricercaTempo<<" ha la maglia numero "<<i<<"."<<endl;
				}
			}
			if(find==false){
	            cout<<"Nessun risultato per la tua ricerca."<<endl;
	            find=true;
	        }
		} while(find==false);
		
		find=false;
		
		cout<<"Vuoi ripetere la ricerca? s/n: ";
	    cin>>c;

	} while(c=='s' || c=='S');
}

int main(){
	int dim;
	float primo, ultimo;
	
	dim = concorrenti();
	
	float tempiArrivo[dim];
	
	input(primo, ultimo, tempiArrivo, dim);

    cout<<"------------------------------"<<endl;

	primoUltimo(primo, ultimo, tempiArrivo, dim);

	cout<<"------------------------------"<<endl;

	ricercaPerMaglia(tempiArrivo, dim);
	
	ricercaPerTempo(tempiArrivo, dim);

	return 0;
}