//Autore: Gianluca Soban 3IA
//Data: 09.02.24
/*Si realizzi un programma che legga da tastiera una sequenza di numeri interi (terminata da 0) da inserire in un vettore,
 e che successivamente inserisca tutti i numeri positivi presenti nella sequenza in un apposito vettore, nello stesso ordine
  e tutti i numeri negativi presenti nella sequenza, nello stesso ordine in un'altro vettore. Visualizzi inoltre alla fine da
   quanti elementi sono composti rispettivamente i 3 vettori.*/

#include <iostream>
#include <vector>
using namespace std;

int k=0, j=0;
vector <int> vett;

void input(){
	int num;
	
	do{
    	cout<<"Inserisci una numero: ";
    	cin>>num;
    	vett.push_back(num);
	} while(num!=0);
	
	vett.pop_back();
}

void calcolaPositiviNegativi(int positivi[], int negativi[]){
	
	for(int i=0; i<vett.size(); i++){
		if(vett[i]>0){
			positivi[k] = vett[i];
			k++;
		}
		else if(vett[i]<0){
			negativi[j] = vett[i];
			j++;
		}
	}
}

void output(int positivi[], int negativi[], vector <int> vett){
	
	cout<<"\nVettore iniziale: "<<endl;
	for(int i=0; i<vett.size(); i++){
    	cout<<vett[i]<<" / ";
	}
	
	cout<<"\nVettore dei numeri positivi: "<<endl;
	for(int i=0; i<k; i++){
		cout<<positivi[i]<<" / ";
	}
	
	cout<<"\nVettore dei numeri negativi: "<<endl;
	for(int i=0; i<j; i++){
		cout<<negativi[i]<<" / ";
	}
	
	cout<<"\nSono stati inseriti "<<vett.size()<<" numeri."<<endl;
	cout<<"Sono stati inseriti "<<k<<" numeri."<<endl;
	cout<<"Sono stati inseriti "<<j<<" numeri."<<endl;
}

int main(){
    int k=0, j=0, dim;
    
	cout<<"Inserisci una serie di numeri, termina con 0: "<<endl;

    input();
	
	int positivi[vett.size()], negativi[vett.size()];
	
	calcolaPositiviNegativi(positivi, negativi);
    
	output(positivi, negativi, vett);

    return 0;
}
