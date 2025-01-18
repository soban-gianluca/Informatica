/*Verifica la legge dei grandi numeri mediante il lancio di un dado: 
leggendo in input il numero do volte che un dado viene lanciato, simula questa situazine mediante la generazione di un numero casuale tra 1 e 6
quindi calcola la frequenza con la quale ciascuna delle sei facce viene selezionata all'aumentare dei lanci.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int numeroLanci(){
	int lanci;
	
	cout<<"Inserisci il numero di lanci da effetuare: ";
	do{
		cin>>lanci;
		if(lanci<0)
			cout<<"Errore nell'inserimento, inserisci un numero piu' grande: ";
			
	} while(lanci<1);
	
	return lanci;
}

void lancioDadi(int dado[], int lanci){
	srand(time(NULL));
	
	for(int i=0; i<lanci; i++){
		do{
			dado[i] = rand() % 6+1;
		} while(dado[i] == 0);
	}
}

void output(int dado[], int lanci){
	if(lanci<=15){
		for(int i=0; i<lanci; i++)
		cout<<i+1<<":\t";
		
		cout<<endl;
		
		for(int i=0; i<lanci; i++)
			cout<<dado[i]<<"\t";
	}
	
	else if(lanci > 15){
		cout<<"Sono stati generato tanti lanci, sei sicuro di volerli visualizzare? s/n: ";
		char c;
		cin>>c;
		if(c=='s' || c=='S'){
			for(int i=0; i<lanci; i++)
			cout<<dado[i]<<"\t";
		}
	}
		
}

void calcolaPercentuale(int dado[], int lanci, int contaCaso1, int contaCaso2, int contaCaso3, int contaCaso4, int contaCaso5, int contaCaso6){
	float perc1, perc2, perc3, perc4, perc5, perc6;
	
	perc1 = contaCaso1*100/lanci;
	perc2 = contaCaso2*100/lanci;
	perc3 = contaCaso3*100/lanci;
	perc4 = contaCaso4*100/lanci;
	perc5 = contaCaso5*100/lanci;
	perc6 = contaCaso6*100/lanci;
	
	cout<<"\nPercentuali: "<<endl;
	cout<<"Probabilita' caso 1: "<<perc1<<" %."<<endl;
	cout<<"Probabilita' caso 2: "<<perc2<<" %."<<endl;
	cout<<"Probabilita' caso 3: "<<perc3<<" %."<<endl;
	cout<<"Probabilita' caso 4: "<<perc4<<" %."<<endl;
	cout<<"Probabilita' caso 5: "<<perc5<<" %."<<endl;
	cout<<"Probabilita' caso 6: "<<perc6<<" %."<<endl;
}

void calcolaProbabilita(int dado[], int lanci){
	int contaCaso1=0, contaCaso2=0, contaCaso3=0, contaCaso4=0, contaCaso5=0, contaCaso6=0;
	
	for(int i=0; i<lanci; i++){
		switch(dado[i]){
			case 1:
				contaCaso1++;
				break;
				
			case 2:
				contaCaso2++;
				break;
				
			case 3:
				contaCaso3++;
				break;
				
			case 4:
				contaCaso4++;
				break;
				
			case 5:
				contaCaso5++;
				break;
				
			case 6:
				contaCaso6++;
				break;
		}
	}
	
	cout<<"\nIn "<<lanci<<" lanci sono usciti: \n"<<contaCaso1<<" numeri 1; \n"<<contaCaso2<<" numeri 2; \n"<<contaCaso3<<" numeri 3; \n";
	cout<<contaCaso4<<" numeri 4; \n"<<contaCaso5<<" numeri 5; \n"<<contaCaso6<<" numeri 6; \n";
	
	calcolaPercentuale(dado, lanci, contaCaso1, contaCaso2, contaCaso3, contaCaso4, contaCaso5, contaCaso6);
	
}

int main(){
	int lanci;
	
	lanci = numeroLanci();
	
	int dado[lanci];
	
	lancioDadi(dado, lanci);
	
	output(dado, lanci);
	
	calcolaProbabilita(dado, lanci);
	
	return 0;
}