#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a=0, b=0, c=0, mcm;
	
	cout<<"Inserisci tre numeri per l'mcm: ";
	cin>>a>>b>>c;
			
	mcm = a*b*c;
	
	for(int i=mcm; i>0; i--){
		if(i%a==0 && i%b==0 && i%c==0)
			mcm=i;
	}
	
	cout<<"Il minimo comune multiplo e': "<<mcm;
	
	return 0;

}

/*void factorize(int n, int* m) {
    for(int i = 0; i < 100; i++)
        m[i] = 0;
    
    while(n > 1) {
        int div;
        for(div = 2; div <= n; div++) {
            if(n % div == 0)
                break;
        }
        m[div]++;
        n /= div;
    }
}

int main() {
    int n1, n2, n3;
    int factors1[100];
    int factors2[100];
    int factors3[100];
    
    cout << "Inserire il primo numero: ";
    cin >> n1;
    cout << "Inserire il secondo numero: ";
    cin >> n2;
    cout << "Inserire il terzo numero: ";
    cin >> n3;
    
    factorize(n1, factors1);
    factorize(n2, factors2);
    factorize(n3, factors3);
    
    int mcm = 1;
    for(int i = 0; i < 100; i++) {
        int factor = pow(i, max(max(factors1[i], factors2[i]), factors3[i]));
        if(factor != 0)
            mcm *= factor;
    }
    
	cout<<mcm;
}*/