//Autore: Gianluca Soban
//Data: 03.10.23
/* Questo programma calcola
lo sconto che si applica alla benzina in base
al numero della propria tessera */

#include <iostream>
using namespace std;

int main()
{
    float numTessera, sconto, costoLitro, numLitri, costo, totale;

    cout<<"Inserisci il numero di tessera: ";
    cin>>numTessera;

    cout<<"Inserisci il prezzo del arburante al litro: ";
    cin>>costoLitro;

    cout<<"Inserisci litri inseriti: ";
    cin>>numLitri;

    costo = numLitri*costoLitro;

    if(numTessera>=10000 && numTessera<=50000)
    {
        if(numTessera<20000)
        {
            sconto=10;
            totale=costo-(costo*sconto/100);
            cout<<"Il totale da pagare e' di: " <<totale<<" euro";
        }
        else
        {
            if(numTessera<30000)
            {
                sconto=8;
                totale=costo-(costo*sconto/100);
                cout<<"Il totale da pagare e' di: " <<totale<<" euro";
            }
            else
            {
                if(numTessera<40000)
                {
                    sconto=6;
                    totale=costo-(costo*sconto/100);
                    cout<<"Il totale da pagare e' di: " <<totale<<" euro";
                }
                else
                {
                    sconto=4;
                    totale=costo-(costo*sconto/100);
                    cout<<"Il totale da pagare e' di: " <<totale<<" euro";
                }
            }
        }
    }
    else
    {
        cout<<"Non hai diritto a nessuno sconto;" <<endl;
        cout<<"Il totale da pagare e' di: " <<costo<<" euro";
    }

return 0;
}
