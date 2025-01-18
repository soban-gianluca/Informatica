//Autore: Gianluca Soban
//Classe 3IA
//Data: 21.11.23
/*Letti in input i valori di n misurazioni (n dato in input), scrivere un programma che calcoli e stampi:
- errore assoluto
- errore relativo
- errore relativo percentuale.*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	float valore=0, valMax=0, valMin=0, media=0, escursione=0, somma=0, parz=0, errAss=0, errRel=0, errPer=0;
	
	cout<<"Inserisci il numero di misure effettuate: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		cout<<"Inserisci il "<<i<<"^ valore: ";
		cin>>valore;
		
		if(i==1){
			valMax=valore;
			valMin=valore;
		}
			
		else if(valore>valMax)
			valMax=valore;
			
		else if(valore<valMin)
			valMin=valore;
			
		somma += valore;
	}
		
	errAss = (valMax-valMin)/2;
	media = somma/n;
	errRel = errAss/media;
	errPer = errRel*100;
	
	cout<<"L'errore assoluto delle misure e': " <<errAss <<endl;
	cout<<"L'errore relativo delle misure e': " <<errRel <<endl;
	cout<<"L'errore percentuale delle misure e': " <<errPer <<endl;
	
	return 0;
}