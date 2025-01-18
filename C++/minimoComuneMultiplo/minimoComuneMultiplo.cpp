#include <iostream>
using namespace std;

int MCD(int x,int y){
	int min=x,mcd;
	if (y<x)
		min=y;
		
	for (int i=1; i<=min; i++){
		if (x%i==0 && y%i==0)
			mcd= i;
	}
	return mcd;
}

int main()
{
	int N,a=0,b,mcm;
	
	cout<< "Inserisci quanti numeri immetterai"<<endl;
	cin>> N;
	
	for (int i=0; i<N; i++){
		
		b=mcm;
		
		cout<< "Immetti un numero"<<endl;
		cin>> a;
		
		if (i==0){
			mcm= a;
			continue;
		}
	}
	cout<< "mcm= "<< a*b/MCD(a,b);
	return 0;
}