#include <iostream>
using namespace std;

int main ()
{
    float spesa;

    cout<<"Inserisci l'ammontare della spesa: ";
    cin>>spesa;

    if(spesa<50)
    {
        spesa = spesa-(spesa*10/100);
        cout<<"L'importo da pagare ammonta a: " <<spesa<<" euro" <<endl;
    }
    else
    {
        if(spesa<100)
        {
            spesa = spesa-(spesa*20/100);
            cout<<"L'importo da pagare ammonta a: " <<spesa<<" euro" <<endl;
        }
        else
        {
            spesa = spesa-(spesa*30/100);
            cout<<"L'importo da pagare ammonta a: " <<spesa<<" euro" <<endl;
        }
    }
return 0;
}
