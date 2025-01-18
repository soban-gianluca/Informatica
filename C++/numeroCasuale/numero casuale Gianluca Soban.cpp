#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main () {
    int num;

    srand(time(NULL)); //genero il seme

    num=(rand()%100)+1; //genero un numero casuale compreso
        //tra 1 e 100
    cout<<"Il numero generato e' " <<num<<endl;

    if (num%2==0)
    {
        cout<<"Il numero generato e' pari "<<endl;
    }
    else
    {
        cout<<"Il numero generato e' dispari "<<endl;
    }
    return 0;

}
