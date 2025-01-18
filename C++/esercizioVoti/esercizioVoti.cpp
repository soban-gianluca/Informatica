//Autore: Gianluca Soban
//Data: 09.11.23
/*
questo programma calcola la media degli alunni di una classe
in base ai voti e manda in output il contatore
dei voti sufficienti e di quelli insufficienti
*/
#include <iostream>
using namespace std;

int main()
{
    float media, voto, parz=0;
    int alunni, conta=0, contaSuff=0, contaNeg=0;

    cout<<"Inserisci il numero degli alunni: ";
    cin>>alunni;

    while(conta!=alunni)
    {
        cout<<"Inserisci il voto: ";
        cin>>voto;

        if(voto>=6)
            contaSuff++;
        else
            contaNeg++;

        parz=voto+parz;
        conta++;
    }
    media = parz/alunni;

    cout<<"La media della classe e': " <<media<<endl;
    cout<<"Ci sono "<<contaSuff<<" voti sufficienti."<<endl;
    cout<<"Ci sono "<<contaNeg<<" voti insufficienti.";

    return 0;

}
