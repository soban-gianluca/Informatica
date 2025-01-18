//Autore: Gianluca Soabn
//Classe: 3IA
//Data: 1.12.23
/*Questo programma simula il funzionamento di un distributore automatico*/

#include<iostream>
using namespace std;

int main()
{
    const float OGG1=0.50, OGG2=0.99, OGG3=1.50, OGG4=1.99, OGG5=2.49;
    int scelta;
    float moneta=0, resto, temp=0;
    
    cout<<"Oggetto 1: "<<OGG1<<" euro."<<endl;
    cout<<"Oggetto 2: "<<OGG2<<" euro."<<endl;
    cout<<"Oggetto 3: "<<OGG3<<" euro."<<endl;
    cout<<"Oggetto 4: "<<OGG4<<" euro."<<endl;
    cout<<"Oggetto 5: "<<OGG5<<" euro."<<endl;
    cout<<"Si puo' pagare solamente con monete da 1, 5, 20, 20, 50 centesimi."<<endl;
    cout<<"Inserisci la tua scelta: "; 
    cin>>scelta;
    
    switch(scelta){
        case 1:
            while(temp<OGG1){
                cout<<"Inserisci la moneta: ";
                cin>>moneta;
                
                if(moneta != 0.01 || moneta != 0.05 || moneta != 0.10 || moneta != 0.20 || moneta != 0.50){
                	temp+=moneta;
                	cout<<"Sei a: "<<temp<<" euro."<<endl;
				}
                else {
                	cout<<"Moneta non valida."<<endl;
                	moneta=0;
				}
                
            }
            resto=temp-OGG1;
            break; 
			  
        case 2:
           while(temp<OGG2){
                cout<<"Inserisci la moneta: ";
                cin>>moneta;
                
                if(moneta != 0.01 || moneta != 0.05 || moneta != 0.10 || moneta != 0.20 || moneta != 0.50){
                	temp+=moneta;
                	cout<<"Sei a: "<<temp<<" euro."<<endl;
				}
                else {
                	cout<<"Moneta non valida."<<endl;
                	moneta=0;
				}
                
            }
            resto=temp-OGG2;
            break; 
            
        case 3:
        	while(temp<OGG3){
                cout<<"Inserisci la moneta: ";
                cin>>moneta;
                
                if(moneta != 0.01 || moneta != 0.05 || moneta != 0.10 || moneta != 0.20 || moneta != 0.50){
                	temp+=moneta;
                	cout<<"Sei a: "<<temp<<" euro."<<endl;
				}
                else {
                	cout<<"Moneta non valida."<<endl;
                	moneta=0;
				}
                
            }
            resto=temp-OGG3;
            break;
            
        case 4:
        	while(temp<OGG4){
                cout<<"Inserisci la moneta: ";
                cin>>moneta;
                
                if(moneta != 0.01 || moneta != 0.05 || moneta != 0.10 || moneta != 0.20 || moneta != 0.50){
                	temp+=moneta;
                	cout<<"Sei a: "<<temp<<" euro."<<endl;
				}
                else {
                	cout<<"Moneta non valida."<<endl;
                	moneta=0;
				}
                
            }
            resto=temp-OGG4;
            break;
           
        case 5:
        	while(temp<OGG5){
                cout<<"Inserisci la moneta: ";
                cin>>moneta;
                
                if(moneta != 0.01 || moneta != 0.05 || moneta != 0.10 || moneta != 0.20 || moneta != 0.50){
                	temp+=moneta;
                	cout<<"Sei a: "<<temp<<" euro."<<endl;
				}
                else {
                	cout<<"Moneta non valida."<<endl;
                	moneta=0;
				}
                
            }
            resto=temp-OGG5;
            break;
             
        default:
            cout<<"Codice errato.";            
    }
    cout<<"Oggetto ottenuto."<<"\t\tIl tuo resto e': "<<resto<<" euro.";
    
    return 0;
}