#include <iostream>
using namespace std;

int main()
{
    int eta;

    do
    {
        cout<<"Inserisci la tua eta': ";
        cin>>eta;

    } while (eta<0 || eta>120);

    cout<<eta;
    return 0;
}
