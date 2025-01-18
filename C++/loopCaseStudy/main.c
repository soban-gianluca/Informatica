/*Classi terze Informatica

Cicli C/C++/Java - CASE STUDY
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
        printf("%d\n", num);
        num = (rand() % 50);
    }
    printf("%d", num);
    return 0;
}
*/

//CASE STUDY 1: ciclo con uscita per input particolare (con do while)

//Scrivere un programma che visualizza una successione di numeri casuali
//interi positivi compresi tra 0 e 49, finchè non viene generato lo 0.

/*
int main() {
    int num = 0;
    srand(time(NULL));
    num = (rand() % 50);
    do {
        printf("%d\n", num);
        num = (rand() % 50);
    } while (num != 0);
    printf("%d", num);
    return 0;
}
*/

//------------------------------------------------------------------

//CASE STUDY 2: ciclo per il calcolo della media

//Calcolare la media dei voti di uno studente

/*
int main()
{
    float voto, somma = 0, conta;
    float media;
    printf("-------------->Valore di somma: %.2f", somma);
    do {
        printf("\nInserisci un voto. 0 per terminare.\n");
        scanf("%f", &voto);
        somma = somma + voto; //somma+=voto;
        conta++;
    } while (voto != 0);
    media = somma/conta;
    printf("%.2f", media);
    return 0;
}
*/

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
        printf("%d\n", num);
        tentativi++;
    }
    if (somma >= 100)
        printf("%d in %d tentativi", somma, tentativi);
    else
        printf("Il numero di tentativi possibili e\' stato superato!");
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
        printf("Inserisci un numero reale. 0 per terminare! ");
        scanf("%f", &num);
        if (num > 0) {
            contaPositivi++;
            sommaPositivi+=num; //sommaPositivi = sommaPositivi + num;
        } else if (num < 0) {
            contaNegativi++;
            sommaNegativi+=num; //sommaNegativi = sommaNegativi + num;
        }
    }
    printf("\nIl numero di valori positivi inseriti e\': %d", contaPositivi);
    printf("\nIl numero di valori negativi inseriti e\': %d",  contaNegativi);
    printf("\nLa somma dei numeri positivi e\': %.2f", sommaPositivi);
    printf("\nLa somma dei numeri negativi e\': %.2f", sommaNegativi);
    return 0;
}
*/

//CASE STUDY 5: ciclo per la ricerca del massimo

//Problema: dati in input 10 numeri positivi,
//trova il valore massimo e visualizzalo.

/*
int main() {
    int num = 0, i = 0, max = 0; //i contatore
    printf("Inserisci 10 valori interi: ");
    //for
    for (i = 0; i < 10; i++) { //anche while (i < 10) {corpo ciclo i++;}
        scanf("%d", &num);
        if (i == 0) //1° GIRO = la prima volta
            max = num;
        else //dal secondo giro in poi = se non è laprima volta
            if (num > max)
                max = num;
    }
    printf("Il massimo e\': %d", max);
    return 0;
}
*/
