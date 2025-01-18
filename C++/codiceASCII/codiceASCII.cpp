#include <iostream>
using namespace std;

int main(){
	int n;
	char carattere;

	do{
        cout<<"\nInserisci un numero intero e verra' scritta la sua lettera del codice ASCII corrispondente, inserisci 0 per uscire: ";
        cin>>n;

        if(n!=0 || n<65 || n>91 && n<97 || n>122)
        cout<<"Nessuna lettera corrispondente.";

        else{
            carattere=n;
            cout<<"La lettera corrispondente e': "<<carattere<<".";
        }
	}
	while(n!=0);

	return 0;
}
