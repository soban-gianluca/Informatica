//Autore: Gianluca Soban 3IA
//Data: 03/05/24
/*Scrivere un programma C++, con l’utilizzo di sottoprogrammi, che accetti in input un’e-mail di lunghezza variabile del tipo nome@dominio.it (es. carloverdi@gmail.com)
 e che verifichi che l’e-mail inserita corrisponda a quella dell’utente Verdi (cablata nel programma). Se non coincide chiedere iterativamente l’input da tastiera.
Inoltre, il programma deve memorizzare in tre variabili separate l’utente, il dominio e la root:
utente = nome    (la sottostringa prima della @)
domain = domino
root = com        (la sottostringa dopo il punto)
Creare una password per l’utente formato dai primi tre caratteri dell’utente, seguito dal dominio e dalla stringa “123” e visualizzarla a video*/

#include <iostream>
#include <string>

using namespace std;

string input(string mailUtente){
	string mail;
	int check;
	
	cout<<"Inserisci la tua email: ";
	do{
		cin>>mail;
		
		check = mail.compare(mailUtente);
		if(check != 0)
			cout<<"L'email non coorrisponde, inserire di nuovo: ";
	}while(check != 0);
	
	return mail;
}

string getUtente(string mail){
	string utente;
	
	utente = mail.substr(0, 10);
		
	return utente;
}

string getDomain(string mail){
	string domain;
	
	domain = mail.substr(11, 5);
	
	return domain;
}

string getRoot(string mail){
	string root;
	
	root = mail.substr(17, 19);
	
	return root;
}

void output(string mail, string utente, string domain, string root){
	cout<<"\nE-mail: "<<mail<<endl;
	cout<<"Utente: "<<utente<<endl;
	cout<<"Dominio: "<<domain<<endl;
	cout<<"Root: "<<root<<endl;
}

int main(){
	string mail;
	string mailUtente = "carloverdi@gmail.com";
	string utente, domain, root;
	
	mail = input(mailUtente);
	
	utente = getUtente(mail);
	domain = getDomain(mail);
	root = getRoot(mail);
	
	output(mail, utente, domain, root);
	
	return 0;
}