#include <iostream>
using namespace std;

int main()
{
    const float COPIEBN=0.10;
    const float COPIECOL=0.80;
    const float RILEGARE=1.30;

    float costoTot, copieColori, copieBianco, copieTot, costoBianco, costoColori;

    cout<<"Inserisci numero di fotocopie in bianco e nero: ";
    cin>>copieBianco;

    cout<<"Inserisci numero di fotocopie a colori: ";
    cin>>copieColori;

    copieTot = copieBianco + copieColori;
    costoTot = (COPIEBN*copieBianco)+(COPIECOL*copieColori);
    costoBianco = COPIEBN*copieBianco;
    costoColori = COPIECOL*copieColori;

    cout<<"Le fotocopie totali sono: " <<copieTot <<endl;
    cout<<"Il costo per le fotocopie in bianco e nero e' di: " <<costoBianco <<" euro" <<endl;
    cout<<"il costo per le fotocopie a colori e' di: " <<costoColori <<" euro" <<endl;
    cout<<"Il costo totale per il fascicolo e' di " <<costoTot <<" euro" <<endl;

    return 0;
}
