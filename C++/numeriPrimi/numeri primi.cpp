
/*
Es. 3 Visualizzare i primi 1000 numeri primi.
(Un numero è primo se è divisibile solo per 1 e per se stesso)
*/

#include <iostream>

using namespace std;

int main()
{
    int num=1, dividendo, conta=1;

    cout<<num <<endl;
    num++;

    for (conta;conta<1000;num++) {

        dividendo=2;

        while (num%dividendo>=1) {
                dividendo++;
        }

        if (num==dividendo) {
        conta++;
        cout<<num <<endl;
        }
    }
return 0;
}
