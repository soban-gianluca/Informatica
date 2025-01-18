//Autore: Gianluca Soban
//Classe: 3IA
/*Dati in input il numero di allievi e quello delle allieve di una scuola, 
calcolare la percentuale di maschi e di femmine di ogni classe e di tutta la scuola. Usare i sottoprogrammi.*/

#include <iostream>
using namespace std;

int percentualeMaschi(int totale, int maschi){
	int percentualeM;
	
	percentualeM = maschi*100/totale;
	
	return percentualeM;
}

int percentualeFemmine(int totale, int femmine){
	int percentualeF;
	
	percentualeF = femmine*100/totale;
	
	return percentualeF;
}

int main(){
	int totale=0, maschi=0, femmine=0, percM, percF;
	
	cout<<"Inserisci il numero di alunni totale della scuola: ";
	cin>>totale;
	cout<<"Inserisci il numero di allievi maschi nella scuola: ";
	cin>>maschi;
	cout<<"Inserisci il numero di allieve femmine nella scuola: ";
	cin>>femmine;
	
	percM = percentualeMaschi(totale, maschi);
	percF = percentualeFemmine(totale, femmine);
	
	cout<<"La percentuale di maschi nella scuola e' pari al "<<percM<<"%."<<endl;
	cout<<"La percentuale di femmine nella scuola e' pari al "<<percF<<"%.";
	
	return 0;
}