/*Classi terze Informatica

Cicli C/C++/Java - CASE STUDY
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//CASE STUDY 1: ciclo con uscita per input particolare (con while)

//Scrivere un programma che visualizza una successione di numeri casuali
//interi positivi compresi tra 0 e 49, finchè non viene generato lo 0.
/*
int main()
{
    int num = 0;
    srand(time(NULL));
    num = (rand() % 50);
    while (num != 0) {
        cout << num << " ";
        num = (rand() % 50);
    }
    cout << endl;
    cout << num;
    return 0;
}*/


//CASE STUDY 1: ciclo con uscita per input particolare (con do while)

//Scrivere un programma che visualizza una successione di numeri casuali
//interi positivi compresi tra 0 e 49, finchè non viene generato lo 0.

/*
int main() {
    int num = 0;
    srand(time(NULL));
    num = (rand() % 50);
    do {
        cout << num << endl;
        num = (rand() % 50);
    } while (num != 0);
    cout << num;
    return 0;
}
*/

//------------------------------------------------------------------

//CASE STUDY 2: ciclo per il calcolo della media

//Calcolare la media dei voti di uno studente

/*
int main()
{
    float voto, somma = 0;
    int conta = 0;
    float media;
    cout << "-------------->Valore di somma: " << somma;
    do {
        cout << "\nInserisci un voto. 0 per terminare.\n";
        cin >> voto;
        somma = somma + voto;
        conta = conta + 1;
    } while (voto != 0);
    media = (float) somma/(conta-1);
    cout << media;
    return 0;
}*/


//CASE STUDY 3: ciclo con uscita per condizione avverata

//Generare una serie di valori compresi tra 1 e 40. La serie termina quando
//la somma dei numeri inseriti è maggiore o uguale a 100 oppure quando
//è stato raggiunto il numero di tentativi stabiliti.


const int NUM_TENT = 5;

int main()
    {
    int num, somma = 0, tentativi = 0;
    srand(time(NULL));
    while (somma < 100 && tentativi < NUM_TENT) {
        num = (rand() % 40) + 1;
        somma = somma + num; //somma+=num;
        cout << num << " ";
        tentativi = tentativi + 1;
    }
    cout << endl;
    if (somma >= 100)
        cout << somma << " in " << tentativi << " tentativi.";
    else
        cout << "\nIl numero di tentativi possibili e\' stato superato!";
    return 0;
}


//CASE STUDY 4: ciclo con condizioni e sommatorie

//Inserire dei numeri reali da tastiera. 0 per terminare l'inserimento.
//Visualizzare quanti sono numeri positivi, quanti negativi,
//la somma dei positivi e la somma dei negativi.
/*

int main()
{
    float num = 1, sommaPositivi = 0, sommaNegativi = 0;
    int contaPositivi = 0, contaNegativi = 0;
    while (num != 0) {
        cout << "Inserisci un numero reale. 0 per terminare! ";
        cin >> num;
        if (num > 0) {
            contaPositivi = contaPositivi + 1;
            sommaPositivi = sommaPositivi + num;
        } else if (num < 0) {
            contaNegativi = contaNegativi + 1;
            sommaNegativi = sommaNegativi + num;
        }
    }
    cout << "\nIl numero di valori positivi inseriti e\': " << contaPositivi;
    cout << "\nIl numero di valori negativi inseriti e\': " << contaNegativi;
    cout << "\nLa somma dei numeri positivi e\': " << sommaPositivi;
    cout << "\nLa somma dei numeri negativi e\': "<< sommaNegativi;
    return 0;
}
*/

//CASE STUDY 5: ciclo per la ricerca del massimo

//Problema: dati in input 10 numeri positivi,
//trova il valore massimo e visualizzalo.

/*
int main() {
    int num = 0, i = 0, max = 0; //i contatore
    cout << "Inserisci 10 valori interi: ";
    while (i < 10) {
        cin >> num;
        if (i == 0) //1° GIRO = la prima volta
            max = num;
        else //dal secondo giro in poi = se non è laprima volta
            if (num > max)
                max = num;
        i = i + 1;
    }
    cout << "Il massimo e\': " << max;
    return 0;
}
*/
