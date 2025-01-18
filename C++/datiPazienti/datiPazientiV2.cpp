#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct dati{
	string nome;
	int eta;
};

int main(){
	vector<dati> datiPazienti;
	int nPazienti;
	
	cout<<"Inserisci il numero di pazienti da ossererare: ";
	cin>>nPazienti;
	
	dati d;
	for(int i=0; i<nPazienti; i++){
		cout<<"Inserisci il nome del "<<i+1<<"^ paziente: ";
		cin>>d.nome;
		cout<<"Inserisci l'eta di "<<d.nome<<": ";
		cin>>d.eta;
		datiPazienti.push_back(d);
	}
	
	cout<<"I dati dei pazienti sono: "<<endl;
	cout<<"Nome: \t Eta:"<<endl;
	
	for(int i=0; i<nPazienti; i++){
		cout<<datiPazienti[i].nome<<"\t"<<datiPazienti[i].eta<<endl;
	}
	
	return 0;
}