/*Dichiarare due array di 6 numeri interi e caricare il primo con numeri 
inseriti da tastiera, caricare il secondo in modo tale da avere il doppio 
dei primi numeri. infine ordinare*/

#include <iostream>
using namespace std;

#define DIM 6

void input(int num1[]){
	for(int i=0; i<DIM; i++){
		cout<<"Inserisci il "<<i+1<<"^ numero: ";
		cin>>num1[i];
	}
}

void popolaNum2(int num1[], int num2[]){
	for(int i=0; i<DIM; i++)
		num2[i] = num1[i] * 2;
}

void output(int num1[], int num2[]){
	for(int i=0; i<DIM; i++)
		cout<<num1[i]<<"\t";
	
	cout<<"\tPRIMO ARRAY."<<endl;
		
	for(int i=0; i<DIM; i++)
		cout<<num2[i]<<"\t";
		
	cout<<"\tSECONDO ARRAY."<<endl;
}

void ordinamento(int num1[], int num2[]){
	for(int k=0; k<DIM; k++)
		for(int i=0; i<DIM; i++)
			if(num1[i] > num1[i+1]){
				int temp = num1[i];
				num1[i] = num1[i+1];
				num1[i+1] = temp;
			}
			
	for(int k=0; k<DIM; k++)
		for(int i=0; i<DIM; i++)
			if(num2[i] > num2[i+1]){
				int temp = num2[i];
				num2[i] = num2[i+1];
				num2[i+1] = temp;
			}
}

int calcolaSomma(int num2[]){
	int somma=0;
	
	for(int i=0; i<DIM; i++)
		somma += num2[i];
		
	return somma;
}

int main(){
	int num1[DIM], num2[DIM], somma;
	
	input(num1);
	
	popolaNum2(num1, num2);
	
	output(num1, num2);
	
	cout<<"\n\nORDINAMENTO DEGLI ARRAY: "<<endl;
	
	ordinamento(num1, num2);
	
	output(num1, num2);
	
	somma = calcolaSomma(num2);
	
	cout<<"\n\nLa somma degli elementi del secondo array e': "<<somma<<".";
	
	return 0;
}