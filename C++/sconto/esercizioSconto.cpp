#include <iostream>
using namespace std;

int main()
{
    float prezzo,sconto,scontoCalcolato,scontato;

    cout<<"Inserisci il prezzo del prodotto da scontare: ";
    cin>>prezzo;

    cout<<"Inserisci lo sconto da applicare: ";
    cin>>sconto;

    scontoCalcolato = (prezzo*sconto)/100;
    scontato = prezzo-scontoCalcolato;

    cout<<"Il prezzo scontato da pagare e' di: " <<scontato<<" euro";

    return 0;
}
