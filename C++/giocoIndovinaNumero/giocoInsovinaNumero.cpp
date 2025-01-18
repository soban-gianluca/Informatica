//Autore: Gianluca Soban
//Classe: 3IA
//Data: 1/12/23
/*Questo programma genera un numero casuale tra 1 e 100 e l'utente deve indovinare il numero*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, i=1;
	
	srand(time(NULL));
	num = (rand() % 101);
	
	cout<<"Indovina il numero casuale tra 0 e 100."<<endl;
	cin>>guess;
	
	while(guess!=num && i<10){
		if(guess<num)
			cout<<"Troppo basso, riprova."<<"\t"<<"\tNumero tentativi: "<<i<<endl;
		else
			cout<<"Troppo alto, riprova."<<"\t"<<"\tNumero tentativi: "<<i<<endl;
		
		cin>>guess;
		i++;
	}
	
	if(i==10)
		cout<<"Mi dispiace, tentativi esauriti. Il numero era: "<<num;
	else
		cout<<"Complimenti, hai indovinato.";
		
	return 0;
}