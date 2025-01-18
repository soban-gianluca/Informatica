//Autore: Gianluca Soban
//Data: 13.10.23
/*
questo programma calcola il prezzo
del biglietto del tragetto in base
al tipo del veicolo e della cilindrata
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int scelta, cilindrata;
    const float PREZZO1=20, PREZZO2=30, PREZZO3=40, PREZZO4=50, PREZZO5=80;
    float totale;

    cout<<"Premere 1 se si possiede un autoveicolo" << endl;
    cout<<"Premere 2 se si possiede un camion" << endl;
    cout<<"Inserire la propria scelta: ";
    cin>>scelta;

    switch (scelta)
    {
        case 1:
            cout<<"Inserire la cilindrata dell'autovettura: ";
            cin>>cilindrata;

            if (cilindrata<1000)
                totale = PREZZO1;
            else if (cilindrata<2000)
                totale = PREZZO2;
            else
                totale = PREZZO3;
            break;

        case 2:
            cout<<"Inserire la cilindrata del camion: ";
            cin>>cilindrata;

            if (cilindrata<2000)
                totale = PREZZO3;
            else if (cilindrata<3000)
                totale = PREZZO4;
            else
                totale = PREZZO5;
            break;

        default:
            cout<<"Errore.";
            break;
    }

    if (scelta == 1 || scelta == 2)
       cout<<"Il prezzo da pagare ammonta a: "<<totale<<" euro.";

return 0;
}
