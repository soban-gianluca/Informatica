//Autore: Gianluca Soban
//Data: 10.10.23
/*
Questo programma prende in input il
prezzo di un prodotto e calcola
le tasse da applicare in base
al prezzo del prodotto
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float prezzo, totale;
    const float TASSA1=16, TASSA2=21;

    cout<<"Inserisci il prezzo del prodotto acquistato: ";
    cin>>prezzo;

    if(prezzo<10)
        cout<<"Il prezzo da pagare ammonta a: "<<prezzo<<" euro.";
    else
    {
        if(prezzo<100)
        {
            totale = prezzo+(prezzo*TASSA1/100);
            cout<<"Il prezzo da pagare ammonta a: "<<totale<<" euro.";
        }
        else
        {
            totale = prezzo+(prezzo*TASSA2/100);
            cout<<"Il prezzo da pagare ammonta a: "<<totale<<" euro.";
        }
    }
return 0;
}
