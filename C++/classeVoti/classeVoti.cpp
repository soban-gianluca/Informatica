/*Tabella di tot alunni
inserire voti, calcolare media della classe.
quanti alunni insufficenti e sufficenti*/

#include <iostream>
using namespace std;

void input(string nome[], float voto[], int dim){
	
	for(int i=0; i<dim; i++){
		cout<<"Inserisci il nome del "<<i+1<<"^ alunno: ";
		cin>>nome[i];
	}
	
	for(int i=0; i<dim; i++){
		cout<<"Inserisci il voto di "<<nome[i]<<": ";
		cin>>voto[i];
	}
}

void output(string nome[], float voto[], int dim){
	
	cout<<"Voto: \t\t Nome: "<<endl;
	
	for(int i=0; i<dim; i++){
		cout<<voto[i]<<"\t\t"<<nome[i]<<endl;
	}
}

void suffInsuff(float voto[], int dim){
	int contaSuff=0, contaInsuff=0;
	
	for(int i=0; i<dim; i++){
		if(voto[i]>=6)
			contaSuff++;
			
		else 
			contaInsuff++;
	}
	
	if(contaSuff==1)
		cout<<"C'e' stato "<<contaSuff<<" voto sufficiente."<<endl;
		
	else
		cout<<"\nCi sono stati "<<contaSuff<<" voti sufficienti."<<endl;
		
	if(contaInsuff==1)
		cout<<"C'e' stato "<<contaInsuff<<" voto insufficiente."<<endl;
		
	else
		cout<<"Ci sono stati "<<contaInsuff<<" voti insufficienti."<<endl;
}

float calcolaMedia(float voto[], int dim){
	float somma=0, media=0;
	
	for(int i=0; i<dim; i++){
		somma += voto[i];
	}
	
	media = somma/dim;
	
	return media;
}

void ordinamento(float voto[], int dim){
	
	for(int k=0; k<dim-1; k++)
		for(int i=0; i<dim-1; i++)
			if(voto[i] > voto[i+1]){
				int temp = voto[i+1];
				voto[i+1] = voto[i];
				voto[i] = temp;
			}	
}

int main(){
	int dim=0;
	float media;
	
	cout<<"Inserisci il numero di alunni: ";
	cin>>dim;
	
	string nome[dim];
	float voto[dim];
	
	input(nome, voto, dim);
	
	output(nome, voto, dim);
	
	suffInsuff(voto, dim);
	
	media = calcolaMedia(voto, dim);
	
	cout<<"La media della classe e' di "<<media<<"."<<endl;
	
	cout<<"\nARRAY PRIMA DELL'ORDINAMENTO: "<<endl;
	for(int i=0; i<dim; i++)
		cout<<voto[i]<<" ";
		
	ordinamento(voto, dim);
	
	cout<<"\nARRAY DOPO L'ORDINAMENTO: "<<endl;
	for(int i=0; i<dim; i++)
		cout<<voto[i]<<" ";
	
	return 0;
}