//Autore: Gianluca Soban
//Data: 06.10.23
/*Questo programma riceve in input i nomi
dei giornali e quante copie sono state bendute,
mostra quale è il piu venduto e i guadagni totali*/

#include <iostream>
using namespace std;

int main()
{
    string nome1, nome2, nome3;
    int copie1, copie2, copie3;
    float guadagnoTot, guadagno1, guadagno2, guadagno3;
    const float PREZZO1=0.10, PREZZO2=0.20, PREZZO3=0.30;

    cout<<"Inserisci il nome del primo giornale: ";
    cin>>nome1;
    cout<<"Inserisci le copie vendute da quel giornale: ";
    cin>>copie1;

    cout<<"Inserisci il nome del secondo giornale: ";
    cin>>nome2;
    cout<<"Inserisci le copie vendute da quel giornale: ";
    cin>>copie2;

    cout<<"Inserisci il nome del terzo giornale: ";
    cin>>nome3;
    cout<<"Inserisci le copie vendute da quel giornale: ";
    cin>>copie3;

    if(copie1>copie2)
    {
        if(copie1>copie3)
            cout<<"Il giornale che ha venduto di piu' e' " <<nome1 <<" con " <<copie1<<" copie"<<endl;
        else
            cout<<"Il giornale che ha venduto di piu' e' " <<nome3 <<" con " <<copie3<<" copie"<<endl;
    }
    else
        if(copie2>copie3)
            cout<<"Il giornale che ha venduto di piu' e' " <<nome2 <<" con " <<copie2<<" copie"<<endl;
        else
            cout<<"Il giornale che ha venduto di piu' e' " <<nome3 <<" con " <<copie3<<" copie"<<endl;

    if(copie1>0 && copie1<200)
        guadagno1=copie1*PREZZO1;
    else
        if(copie1>200 && copie1<300)
            guadagno1=copie1*PREZZO2;
        else
            guadagno1=copie1*PREZZO3;

    if(copie2>0 && copie2<200)
        guadagno2=copie2*PREZZO1;
    else
        if(copie2>200 && copie2<300)
            guadagno2=copie2*PREZZO2;
        else
            guadagno2=copie2*PREZZO3;

    if(copie3>0 && copie3<200)
        guadagno3=copie3*PREZZO1;
    else
        if(copie3>200 && copie3<300)
            guadagno3=copie3*PREZZO2;
        else
            guadagno3=copie3*PREZZO3;

    guadagnoTot=guadagno1+guadagno2+guadagno3;

    cout<<"Il guadagno totale del giornalaio ammonta a: " <<guadagnoTot<<" euro";

return 0;
}
