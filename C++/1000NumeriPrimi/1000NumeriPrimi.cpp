#include <iostream>
using namespace std;

int main(){
	const int TETTO=1000;
	int n;
	
	cout<<"Inserisci 1 per iniziare: ";
	cin>>n;
	
	if(n==1){
		for(int i=0; i<TETTO; i++){
			if(i%2 != 0 && i%3 != 0 && i%5 != 0)
				cout<<i<<" e' un numero primo."<<endl;
		}
	}
}
