//Autore: Gianluca Soban
//Data: 06.10.23
/*
Leggere il valore compreso tra 0 e 2
che corrispondono agli stati di un
semaforo e visualizza una parola
che lo traduce nel colore corrispondente
0-verde 1-arancione 2-rosso
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int valore = 0;
    cout<<"Inserisci un numero compreso tra 0 e 2: ";
    cin>>valore;

    switch (valore)
    {
        case 0:
            cout<<"Verde";
            break;
        case 1:
            cout<<"\nArancione";
            break;
        case 2:
            cout<<"\nRosso";
            break;
        default:
            cout<<"\nValore non corretto";
            break;
    }
return 0;
}
