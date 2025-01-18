//Autore: Gianluca Soban
//Classe 3IA
//Data: 24.11.23
/*Es. 2 Dato in input il numero di classi, per ogni classe inserire il numero di alunni promossi, 
promossicon debiti e respinti. Alla fine visualizzare le percentuali di promossi, promossi con debiti e respinti.*/

#include <iostream>
using namespace std;

int main()
{
	int classi=0, prom=0, promDeb=0, resp=0, percProm=0, percPromDeb=0, percResp=0, totaleProm=0, totalePromDeb=0, totaleResp=0, totale=0; 
	
	cout<<"Inserisci il numero di classi: ";
	cin>>classi;
	
	for(int i=1; i<=classi; i++){
		cout<<"Inserisci il numero di alunni promossi della "<<i<<"^ classe: ";
		cin>>prom;
		
		cout<<"Inserisci il numero di alunni promossi con debiti: ";
		cin>>promDeb;
		
		cout<<"Inserisci il numero di alunni respinti: ";
		cin>>resp;
		
		totale += prom+promDeb+resp;
		totaleProm += prom;
		totalePromDeb += promDeb;
		totaleResp += resp;
	}
		
	percProm = (totaleProm*100)/totale;
	percPromDeb = (totalePromDeb*100)/totale;
	percResp = (totaleResp*100)/totale;
	
	cout<<"C'e' una percentuale di: "<<percProm<<"% di alunni promossi."<<endl;
	cout<<"C'e' una percentuale di: "<<percPromDeb<<"% di alunni promossi con debiti."<<endl;
	cout<<"C'e' una percentuale di: "<<percResp<<"% di alunni respinti.";
	
	return 0;
}