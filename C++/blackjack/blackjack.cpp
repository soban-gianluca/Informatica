//Autore: Giacluca Soban 3IA
//BLACKJACK

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
	
	const int DIM=11;
	int player[DIM], dealer[DIM], first=2;
	float puntata;
	char figures[DIM];
	bool fig;
	
	srand(time(NULL));
	
	cout<<"Inserisci la tua puntata: ";
	cin>>puntata;
	
	fig=false;
	
	//GENERAZIONE DEALER	
	for(int i=0; i<first; i++){
		
		dealer[i] = rand() % 13+1;
		
		if(dealer[i]==1){
			figures[i] = 'A';
			fig=true;
		}
			
		if(dealer[i]==11){
			figures[i] = 'J';
			fig=true;
		}
			
		if(dealer[i]==12){
			figures[i] = 'Q';
			fig=true;
		}
			
		if(dealer[i]==13){
			figures[i] = 'K';
			fig=true;
		}
	}
	
	cout<<"\nDealer: "<<endl;
	
	for(int i=0; i<=first; i++){	
		
		if(fig==false)
			first -= 1;
		
		if(dealer[i]==1)
			cout<<figures[i]<<"\t"; 
		if(dealer[i]==11)
			cout<<figures[i]<<"\t"; 
		if(dealer[i]==12)
			cout<<figures[i]<<"\t"; 
		if(dealer[i]==13)
			cout<<figures[i]<<"\t"; 
		
		else if(dealer[i]!=1 && dealer[i]!=11 && dealer[i]!=12 && dealer[i]!=13)	
			cout<<dealer[i]<<"\t";
			
		if(fig==true)
			first -= 1;
		
	}
	
	fig=false;
	
	//GENERAZIONE PLAYER
	for(int i=0; i<first; i++){											//NON GENERA NUMERO CASUALE AL PLAYER
		
		player[i] = rand() % 13+1;
		
		if(player[i]==1){
			figures[i] = 'A';
			fig=true;
		}
			
		if(player[i]==11){
			figures[i] = 'J';
			fig=true;
		}
			
		if(player[i]==12){
			figures[i] = 'Q';
			fig=true;
		}
			
		if(player[i]==13){
			figures[i] = 'K';
			fig=true;
		}
	}
	
	//DEBUG
	for(int i=0; i<=first; i++){
		cout<<player[i]<<", ";
	}
	
	
	
	cout<<"\nPlayer: "<<endl;
	
	for(int i=0; i<=first; i++){
		
		if(fig==false)
			first -= 1;
		
		if(player[i]==1)
			cout<<figures[i]<<"\t"; 
		if(player[i]==11)
			cout<<figures[i]<<"\t"; 
		if(player[i]==12)
			cout<<figures[i]<<"\t"; 
		if(player[i]==13)
			cout<<figures[i]<<"\t"; 
		
		else if(player[i]!=1 && player[i]!=11 && player[i]!=12 && player[i]!=13)	
			cout<<player[i]<<"\t";
			
		if(fig==true)
			first -= 1;
		
	}
	
	return 0;
}