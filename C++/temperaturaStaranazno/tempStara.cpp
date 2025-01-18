#include <iostream>
using namespace std;

int main()
	{
		float temp, parziale=0, conta=0, media;
		
		cout<<"Inserisci la temperatura registrata, 0 pr uscire: ";
		cin>>temp;
		
		while (temp!=0)
			{
				conta=conta+1;
				parziale=parziale+temp;
				cout<<"Inserisci la temperatura registrata, 0 pr uscire: ";
				cin>>temp;
			}
		media=parziale/conta;
		cout<<"La medai delle temperatire e' di. "<<media<<" gradi";
		return 0;	
	}
	