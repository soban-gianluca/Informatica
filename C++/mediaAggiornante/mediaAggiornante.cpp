/*Fatti inserire da tastiera una sequenza inedfinita di numeri,
Il programma stampa ogni volta la media dei numeri inseriti
il programma termina con l'inserimento di un numero negativo*/

#include <iostream>
#include <vector>
using namespace std;

void input(vector <int> vett){
	int num, i=1, somma=0;
	float media;
	
	do{
		cout<<"Inserisci un numero: ";
		cin>>num;
		if(num>0){
			vett.push_back(num);
			somma += num;
			media = (float)somma/i;
			i++;
			cout<<"Media: "<<media<<"."<<endl;
		}
	} while(num>0);
	
	vett.pop_back(num);
}

int main(){
	vector <int> vett;
	
	cout<<"Inserisci una sequenza di numeri, termina con un numero negativo, verra' stampata man mano la media."<<endl;
	
	input(vett);
	
	return 0;
}