#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct dati
{
	string nome;
	int eta;
};

int main()
{
	vector<dati> dati_pazienti;
	int num_pazienti;

	cout << "Inserisci il numero di pazienti: ";
	cin >> num_pazienti;

	dati temp;
	for (int i = 0; i < num_pazienti; i++)
	{
		cout << "Inserisci il nome del paziente " << (i + 1) << ": ";
		cin >> temp.nome;
		cout << "Inserisci l'eta del paziente " << temp.nome << ": ";
		cin >> temp.eta;
		dati_pazienti.push_back(temp);
	}

	cout << "I dati dei pazienti sono: " << endl;
	cout << "Nome:\tEta:"<<endl;
	for (int i = 0; i < num_pazienti; i++)
	{
		cout << dati_pazienti[i].nome << "\t" << dati_pazienti[i].eta << endl;
	}

	return 0;
}