/*Definire una struct data che memorizzi giorno, mese e anno.
Leggere da un file input.txt 10 date di nascita
 (in ogni riga del file ci saranno giorno, mese e anno separati da spazi)
  far inserire all’utente la data odierna e verificare quante date di nascita corrispondono a maggiorenni.*/
  
#include <iostream>
#include <fstream>

#define DIM 10

using namespace std;

struct Data{
	int giorno[DIM];
	int mese[DIM];
	int anno[DIM];
}data;

void getDataOdierna(int &giornoCerca, int &meseCerca, int &annoCerca){
	
	cout << "Insersici la data di oggi nel formato gg mm aaaa: ";
	cin >> giornoCerca >> meseCerca >> annoCerca;
}

void popolaStruct(){
	ifstream file("date.txt");
	
	if(!file.is_open())
		cerr << "Errore nell'apertura del file." << endl;
	
	for(int i=0; i<DIM; i++){
		file >> data.giorno[i];
		file >> data.mese[i];
		file >> data.anno[i];
	}
}

void outputMaggiorenni(int giornoCerca, int meseCerca, int annoCerca){
	ifstream file("date.txt");
	string line;
	
	if(!file.is_open())
		cerr << "Errore nell'apertura del file." << endl;
		
	int i=0;
	while(getline(file, line)){
		if(data.anno[i] - annoCerca > 18) 
			cout << line << "\t" << "Maggiorenne." << endl;
			
		else
			cout << line << "\t" << "Minorenne." << endl;
			
		i++;
	}
}

int main(){
	int giornoCerca, meseCerca, annoCerca;
	
	getDataOdierna(giornoCerca, meseCerca, annoCerca);
	
	popolaStruct();
		
	outputMaggiorenni(giornoCerca, meseCerca, annoCerca);
	
	return 0;
}