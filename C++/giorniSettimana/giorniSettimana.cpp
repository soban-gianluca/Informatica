//Autore: Gianluca Soban
//Data: 13.10.23
/*
questo programma, quando si scrive in impit
un giorno della settimana, restituisce il
nome del giorno inserito
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int giorno;
    string risposta;

    cout<<"Inserisci il numero del giorno: ";
    cin>>giorno;

    switch (giorno)
    {
        case 1:
            risposta = "Domenica";
            break;

        case 2:
            risposta = "Lunedi'";
            break;

        case 3:
            risposta = "Martedi'";
            break;

        case 4:
            risposta = "Mercoledi'";
            break;

        case 5:
            risposta = "Giovedi'";
            break;

        case 6:
            risposta = "Venerdi'";
            break;

        case 7:
            risposta = "Sabato";
            break;

        default:
            cout<<"Errore:";
            break;
    }

    if (giorno>=1 && giorno<=7)
    cout<<"Il giorno selezionato e': "<<risposta;
return 0;
}
