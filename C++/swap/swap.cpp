#include <iostream>
using namespace std;

int main()
{
    float x,y,temp;

    cout<<"Inserisci il primo numero: ";
    cin>>x;

    cout<<"Inserisci il secondo numero: ";
    cin>>y;

    temp=x;
    x=y;
    y=temp;

    cout<<"x vale: " <<x<<"; y vale: " <<y;

    return 0;
}
