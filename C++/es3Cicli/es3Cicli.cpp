//Autore: Gianluca Soban
//Classe: 3IA
//Data: 24.11.23
/*Es. 3 Visualizzare i primi 1000 numeri primi. (Un numero è primo se è divisibile solo per 1 e per se stesso)*/

#include <iostream>
using namespace std;

int main()
{
	int resto, f=2;
	
	for(int i=1; i<1000; i++){	
		for(f=2; f==10; f++){
			resto=i%f;
			if(resto!=0)
				cout<<i<<endl;
		}		
	}	
		
		
	return 0;
}