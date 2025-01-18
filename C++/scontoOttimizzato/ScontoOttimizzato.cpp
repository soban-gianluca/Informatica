#include <iostream>
using namespace std;

int main ()
{
    float prezzo, sconto, prezzoScontato;

    cout<<"Inserisci il prezzo del prodotto da scontare: ";
    cin>>prezzo;

    cout<<"Inserisci lo sconto da applicare: ";
    cin>>sconto;

    prezzoScontato = prezzo-(prezzo*sconto)/100;

    cout<<"Il prezzo scontato da pagare e' di: " <<prezzoScontato<<" euro";

    return 0;
}
