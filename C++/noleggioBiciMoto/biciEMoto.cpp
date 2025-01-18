/*Un servizio di noleggio moto applica la seguente tariffa:
• bicicletta : 2 €/h
• moto : 3 €/h
se si superano i 30 minuti viene addebitata l'ora intera.
Costruire un algoritmo che accetta in ingresso il tipo di veicolo noleggiato,
 l'orario iniziale e l'orario finale del noleggio, che calcola e visualizza importo da pagare.*/
 
 #include <iostream>
 using namespace std;
 
 int main()
 {
 	const int PREZZO1=2, PREZZO2=3;
 	int scelta;
 	float oraIn, oraFin, tempo, imp;
 	
 	cout<<"Premere 1 se si ha noleggiato una bici."<<endl;
 	cout<<"Premere 2 se si ha noleggiato una moto."<<endl;
 	cin>>scelta;
 	
 	cout<<"Inserire l'orario iniziale: ";
 	cin>>oraIn;
 	
 	cout<<"Inserire l'orario finale: ";
 	cin>>oraFin;
 	
 	tempo=oraFin-oraIn;
 	
 	if(tempo<0.30)
 		tempo=0.60;
 	
 	switch(scelta){
 		
 			default:
 			cout<<"Valore non supportato.";
 			break;
 		
 		case 1:
 			imp=PREZZO1*tempo;
 			break;
 			
 		case 2:
 			imp=PREZZO2*tempo;
 			break;
	 }
 	
 			
 	cout<<"Il prezzo da paagre ammonta a: "<<imp<<" euro.";
 	
 	return 0;
 }