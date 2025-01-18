#include <iostream>
using namespace std;

int main()
{
    const float SCATTO=0.15, CANONE=15.00, IVA=21;
    float chiamate, importoScatto, parziale, ivaDaAgg, totale;

    cout<<"Inserisci il numero di chiamate effettuate: ";
    cin>>chiamate;

    importoScatto = chiamate*SCATTO;
    parziale = importoScatto+CANONE;
    ivaDaAgg = (parziale*IVA)/100;
    totale = parziale+ivaDaAgg;

    cout<<"Il totale della bolletta da pagare ammonta a: " <<totale<<" euro";

    return 0;
}
