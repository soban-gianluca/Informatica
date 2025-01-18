//Autore: Gianluca Soban
//Data: 13.10.23
/*
questo programma calcola le imposte
progressive in una somma di denaro
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float importo, totale;
    const int IMP1=5, IMP2=8, IMP3=18, IMP4=24, IMP5=36;

    cout<<"Inserisci l'impoorto da pagare: ";
    cin>>importo;

    if (importo<=5000)
        totale = importo+(importo*IMP1/100);

    else if (importo>5000 && importo<=15000)
        totale = importo+(importo*IMP2/100);

    else if (importo>15000 && importo<=25000)
        totale = importo+(importo*IMP3/100);

    else if (importo>25000 && importo<=35000)
        totale = importo+(importo*IMP4/100);

    else
        totale = importo+(importo*IMP5/100);

    cout<<"Il totale da pagare e': "<<totale<<" euro.";

return 0;
}
