//Autore: Gianluca Soban
//Data: 06.10.23

//Calcolatrice

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    int valore = 0;
    float num1, num2, risultato;
    int mod1, mod2; //numeri che servono per il modulo

    cout<<"Premere 1 per fare una somma.";
    cout<<"\nPremere 2 per fare una sottrazione.";
    cout<<"\nPremere 3 per fare una moltiplicazione.";
    cout<<"\nPremere 4 per fare una divisione.";
    cout<<"\nPremere 5 per fare il modulo.";
    cout<<"\nPremere 6 per fare la radice quadrata." <<endl;
    cin>>valore;

    switch (valore)
    {
        case 1:
            cout<<"Inserire il primo numero per la somma: ";
            cin>>num1;
            cout<<"\nInserire il secondo numero per la somma: ";
            cin>>num2;

            risultato = num1+num2;
            cout<<"\nIl risultato e': "<<risultato;
            break;

        case 2:
            cout<<"Inserire il primo numero per la sottrazione: ";
            cin>>num1;
            cout<<"Inserire il secondo numero per la sottrazione: ";
            cin>>num2;

            risultato = num1-num2;
            cout<<"\nIl risultato e': "<<risultato;
            break;

        case 3:
            cout<<"Inserire il primo numero per la moltiplicazione: ";
            cin>>num1;
            cout<<"Inserire il secondo numero per la moltiplicazione: ";
            cin>>num2;

            risultato = num1*num2;
            cout<<"\nIl risultato e': "<<risultato;
            break;

        case 4:
            cout<<"Inserire il numero da dividere: ";
            cin>>num1;
            cout<<"Inserire il divisore: ";
            cin>>num2;

            if(num2>0)
            {
                risultato = num1/num2;
                cout<<"\nIl risultato e': "<<risultato;
            }
            else
                cout<<"Impossibilie dividere per 0.";
            break;

        case 5:
            cout<<"Inserire il numero intero da dividere: ";
            cin>>mod1;
            cout<<"Inserire il divisore intero: ";
            cin>>mod2;

            risultato = mod1/mod2;
            cout<<"\nIl risultato e': "<<risultato;
            cout<<"\nIl resto della divisione e': "<<mod1%mod2;
            break;

        case 6:
            cout<<"Inserire il numero per fare la radice quadrata: ";
            cin>>num1;

            if(num1>0)
            {
                risultato = sqrt(num1);
                cout<<"La radice quadrata di "<<num1<<" e': "<<risultato;
            }
            else
                cout<<"Impossibiole fare la radice.";
            break;

        default:
            cout<<"Valore non supportato.";
            break;
    }
return 0;
}
