//Autore: Gianluca Soban 3IA
//Data: 08/03/24

#include <iostream>
using namespace std;

void input(int numeri[], int dim){
    for(int i=0; i<dim; i++){
        cout<<"Inserisci il "<<i+1<<" numero: ";
        cin>>numeri[i];
    }
}

void output(int numeri[], int dim){
    for(int i=0; i<dim; i++)
        cout<<numeri[i]<<" ";
}

void scambio(int numeri[], int dim){
    bool flag=false;
    do{
        flag = false;

        for(int i=0; i<dim-1; i++)
            if(numeri[i] < numeri[i+1]){
                int temp = numeri[i+1];
                numeri[i+1] = numeri[i];
                numeri[i] = temp;
                flag = true;
            }
    } while(flag==true);
}

int main(){
    int dim;

    cout<<"Inserisci la dimensione del vettore: ";
    do{
        cin>>dim;
        if(dim<=0)
            cout<<"Errore, inserisci di nuovo: ";
    } while(dim<=0);

    int numeri[dim];

    input(numeri, dim);

    cout<<"\nVettore prima dello scambio: "<<endl;

    output(numeri, dim);

    scambio(numeri, dim);

    cout<<"\nVettore dopo dello scambio: "<<endl;

    output(numeri, dim);

    return 0;
}
