//Autore: Gianluca Soban 3IA
//Data: 09.02.24
/*Nel vettore orestudio sono memorizzate le ore passata a studiare da uno studente per ogni giorno della settimana (con valori tra 0 e 4). 
Dopo aver inserito i valori nel vettore, calcolare e visualizzare il numero totale delle ore di studio della settimana e il giorno in cui lo studente non ha aperto libro.
*/

#include <iostream>
using namespace std;

int main(){
	const int DIM=7;
	float oreStudio[DIM], somma;
	
	for(int i=0; i<DIM; i++){
		cout<<"Inserisci le ore passate a studioare nel "<<i+1<<"^ giorno: ";
		do{
			cin>>oreStudio[i];
			if(oreStudio[i]<0 || oreStudio[i]>4)
				cout<<"Numero non supportato, inserire di nuovo: ";
		} while(oreStudio[i]<0 || oreStudio[i]>4);
		
		somma += oreStudio[i];
	}
	
	cout<<"Questa settimana hai passato un totale di "<<somma<<" ore a studiare."<<endl;
	
	for(int i=0; i<DIM; i++){
		if(oreStudio[i]==0)
			cout<<"Il giorno "<<i+1<<" non hai aperto libro."<<endl;
	}
	
	return 0;
}