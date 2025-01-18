//Autore: Gianluca Soban
//Classe: 3IA
//Data: 08.01.24
//Compiti per le vacanze di Natale.

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void es1(){
	system("color A");
	
	float num=0;
	
	//input
	cout<<"Inserisci un numero e ti verra' detto se e' positivo pure negativo: ";
	cin>>num;
	
	//controllo
	if(num>0)
		cout<<"Il tuo numero e' positivo.";
	else
		cout<<"Il tuo numero e' negativo.";		
}

void es2(){
	system("color A");
	
	int num1=0, num2=0, check1, check2, somma=0, sottrazione=0, prodotto=0;
	
	cout<<"Si inseriscono due numeri, se sono entrambi pari vengono sommati; se sono entrambi dispari verranno sottratti altrimenti fara' il prodotto."<<endl;
	
	//input
	cout<<"Inserisci il primo numero: ";
	cin>>num1;	
	cout<<"Inserisci il secondo numero: ";
	cin>>num2;
	
	//controllo pari dispari
	check1 = num1 % 2;
	check2 = num2 % 2;
	
	//controllo uguaglianze
	if(check1==0 && check2==0){
		somma=num1+num2;
		
		cout<<"I tuoi numeri erano entrambi pari. La somma e': "<<somma<<".";
	}		
	else if(check1!=0 && check2!=0){
		if(num1>num2)
			sottrazione=num1-num2;
		else
			sottrazione=num2-num1;
			
		cout<<"I tuoi numeri erano entrambi dispari. La sottrazione e' pari a: "<<sottrazione<<".";
	}			
	else{
		prodotto=num1*num2;
		
		cout<<"I tuoi numeri erano misti. Il prodotto e': "<<prodotto<<".";
	}	
}

void es3(){
	system("color A");
	
	float prezzo=0, totale;
	int nPezzi=0;
	const int SCONTO1=5, SCONTO2=15, SOGLIAOGG=10;
	
	//input
	cout<<"Inserisci il numero di oggetti acquistati: ";
	cin>>nPezzi;
	cout<<"Inserisci il costo unitario dell'oggetto: ";
	cin>>prezzo;
	
	//calcoli
	totale = nPezzi*prezzo;
	
	if(nPezzi<SOGLIAOGG)
		totale -= totale*SCONTO1/100;
		
	else
		totale -= totale*SCONTO2/100;
		
	//output
	cout<<"Il totale della spesa ammonta a: "<<totale<<" euro.";
}

void es4(){
	system("color A");
	
	int num1=0, num2=0, num3=0;
	
	cout<<"Inserisci tre numeri, il programma dira' se sono tutti diversi oppure sono uguali."<<endl;
	
	//input
	cout<<"Inserisci il primo numero: ";
	cin>>num1;
	cout<<"Inserisci il secondo numero: ";
	cin>>num2;
	cout<<"Inserisci il terzo numero: ";
	cin>>num3;
	
	//controllo
	if(num1!=num2 && num1!=num3 && num2!=num3)
		cout<<"Tutti i numeri sono diversi.";
		
	else
		cout<<"Ci sono dei numeri uguali.";
}

void es5(){
	system("color A");
	
	int num=0;
	
	//input
	cout<<"Inserisci un numero positivo o negativo e verra' controllato se appartiene all'intervallo chiuso (-10; +10): ";
	cin>>num;
	
	//controllo
	if(num>=-10 && num<=10)
		cout<<"Il numero appartiene all'intervallo chiuso -10, +10.";
	else
		cout<<"Il numero NON appartiene all'intervallo chiuso -10, +10.";
}

void es6(){
	system("color A");
	
	float num1=0, num2=0, num3=0;
	
	cout<<"Inserendo tre numeri positivi ti verra' detto se possono essere i lati di un triangolo."<<endl;
	
	//input
	cout<<"Inserisci il primo numero: ";
	cin>>num1;
	cout<<"Inserisci il secondo numero: ";
	cin>>num2;
	cout<<"Inserisci il terzo numero: ";
	cin>>num3;
	
	//controlli
	if(num1<0 || num2<0 || num3<0){
		cout<<"Non possono esserci numeri negativi.";
		exit(0);
	}
			
	if(num1<num2+num3 && num2<num1+num3 && num3<num1+num2)
		cout<<"I tuoi numeri possono essere i lati di un triangolo.";
		
	else
		cout<<"I tuoi numeri non possono essere i lati di un triangolo.";
}

void es7(){
	system("color A");
	
	char risposta;
	
	cout<<"Questo programma risponde si se viene inserita una esse, risponde no con una enne oppuere non sa negli altri casi."<<endl;
	
	//imput
	cout<<"Inserisci un carattere: ";
	cin>>risposta;
	
	//controllo risposta
	if(risposta=='s' || risposta=='S')
		cout<<"Si.";
		
	else if(risposta=='n' || risposta=='N')
		cout<<"No.";
		
	else
		cout<<"Non lo so.";
}

void es8(){
	system("color A");
	
	int dividendo=0, divisore=0, modulo, quoto;
	
	cout<<"Questo programma determina il quoziente ed il resto di una divisione tra numeri interi."<<endl;
	
	//imput
	cout<<"Inserisci il dividendo: ";
	cin>>dividendo;
	cout<<"Inserisci il divisore: ";
	cin>>divisore;
	
	//controlli
	if(divisore==0){
		cout<<"Impossibile dividere per 0.";
		exit(0);
	}
	
	//calcoli
	quoto = dividendo/divisore;
	modulo = dividendo%divisore;
	
	//output
	cout<<"Il risultato della divisone e': "<<quoto<<" con resto: "<<modulo<<".";
}

void es9(){
	system("color A");
	
	int num1=0, num2=0, num3=0, max, min, medio;
	
	cout<<"Inseriti tre numeri interi, verranno scritti in ordine crescente."<<endl;
	
	//input
	cout<<"Inserisci il primo numero: ";
	cin>>num1;
	cout<<"Inserisci il secondo numero: ";
	cin>>num2;
	cout<<"Inserisci il terzo numero: ";
	cin>>num3;
	
	//controllo max
	if(num1>num2 && num1>num3)
		max=num1;
	
	else if(num2>num1 && num2>num3)
		max=num2;
		
	else if(num3>num1 && num3>num2)
		max=num3;
		
		
	//controllo minimo
	if(num1<num2 && num1<num3)
		min=num1;
	
	else if(num2<num1 && num2<num3)
		min=num2;
		
	else if(num3<num1 && num3<num2)
		min=num3;
		
	
	//controllo medio
	if(num1>min && num1<max)
		medio=num1;
	
	else if(num2>min && num2<max)
		medio=num2;
		
	else if(num3>min && num3<max)
		medio=num3;
		
	//output
	cout<<"I numeri in ordine crescente sono: "<<min<<", "<<medio<<", "<<max<<".";
	
}

void es10(){
	system("color A");
	
	int num=0, quadrato=0, k=1;
	
	cout<<"Inserisci un numero e verra' fatto il quadrato utilizzando la somma dei numeri dispari."<<endl;
	
	//input
	cout<<"Inserisci il numero: ";
	cin>>num;
	
	//calcolo
	for(int i=1; i<=num; i++){
		if(k%2!=0)
			quadrato += k;		
			k+=2;
	}
		
	//output
	cout<<"Il quadrato del tuo numero e': "<<quadrato<<".";
}

void es11(){
	system("color A");
	
	int raggio=0;
	float area, circ;
	const float PI=3.14;
	
	cout<<"Questo programma calcola area e circonferenza di un cerchio partendo da un raggio compreso tra 1 e 20."<<endl;
	
	//input
	cout<<"Inserisci il raggio: ";
	cin>>raggio;
	
	//controllo input
	if(raggio<1 || raggio>20)
		cout<<"Valore non supportato.";
		
	//calcoli
	circ = 2*PI*raggio;
	area = PI*(raggio*raggio);
	
	//output
	cout<<"La circonferenza del tuo cerchio e' pari a: "<<circ<<"."<<endl;
	cout<<"L'area del tuo cerchio e' pari a: "<<area<<".";
}

void es12(){
	system("color A");
	
	int codInp;
	char input, outPrec, outSucc;
	
	//input
	cout<<"Inserisci una lettera e verra' mostrata quella che precede e quella che segue: ";
	cin>>input;
	
	//coversioni
	codInp = input;
	
	outPrec = codInp-1;
	outSucc = codInp+1;
	
	//controlli
	if(codInp-1 == 64 || codInp-1 == 96)
		cout<<"La lettera "<<input<<" e' la prima dell'alfabeto; la lettera che segue e': "<<outSucc<<".";
		
	if(codInp+1 == 91 || codInp+1 == 123)
		cout<<"La lettera "<<input<<" e' l'ultima dell'alfabeto; la lettera che precede e': "<<outPrec<<".";
	 
	else if(codInp-1 != 64 && codInp-1 != 96 && codInp+1 != 91 && codInp+1 != 123)
		cout<<"La lettera che precede e': "<<outPrec<<"; la lettera che segue e': "<<outSucc<<".";
	
}

void es13(){
	system("color A");
	
	int codInp, codOut;
	char input, output;
	
	//input
	cout<<"Inserisci una lettera e verra' mostrata la lettera che segue: ";
	cin>>input;
	
	//coversione
	codInp = input;
	codOut = codInp + 1;
	output = codOut;
	
	//output
	cout<<"La lettera che segue e': "<<output<<".";
}

void es14(){
	system("color A");
	
	int secondi=0, ore=0, minuti=0, giorni=0;
	
	//input
	cout<<"Inserisci un valore in secondi e verra' trasformato in giorni, ore, minuti e secondi: ";
	cin>>secondi;
		
	//calcoli
	minuti = secondi/60;
	secondi %= 60;
	
	ore = minuti/60;
	minuti %= 60;
	
	while(ore>24){
		giorni = ore/24;
		ore -= 24;
	}

	//output
	cout<<giorni<<" giorni; "<<ore<<" ore; "<<minuti<<" minuti; "<<secondi<<" secondi.";
}

void es15(){
	system("color A");
	
	int n;
	char carattere;

	do{
        //input
		cout<<"\nInserisci un numero intero e verra' scritta la sua lettera del codice ASCII corrispondente, inserisci 0 per uscire: ";
        cin>>n;

        //controllo
		if(n<65 || n>91 && n<97 || n>122)
        	cout<<"Nessuna lettera corrispondente.";
	
        //conversione
		else{
            carattere=n;
            cout<<"La lettera corrispondente e': "<<carattere<<".";
        }
	}
	while(n!=0);
}

void es16(){
	system("color A");
	
	float ora=0, totale=0;
	const float PREZZO1=1, PREZZO2=1.20;
	
	//input
	cout<<"Inerisci i minuti trascorsi nel parcheggio: ";
	cin>>ora;
	
	//calcolo prezzo
	if(ora<60)
		totale = ora*PREZZO1;
	else
		totale = ora*PREZZO2;
		
	//output
	if(totale<100)
		cout<<"Il totale da pagare ammonta a: "<<totale<<" centesimi.";
		
	else if(totale>=100){
		totale /= 100;
		cout<<"Il totale da pagare ammonta a: "<<totale<<" euro.";
	}
		
}

void es17(){
	system("color A");
	
	float prezzo=0, peso=0, pesoEcc=0, totale=0;
	const float TASSA=2, TETTO=20;
	
	//input
	cout<<"Inserisci il costo del tuo viaggio: ";
	cin>>prezzo;
	cout<<"Per ogni kilo eccedente ai 20, si deve pagare un sovrapprezzo del 2% sul costo del viaggio."<<endl;
	cout<<"Inserisci il peso del tuo bagaglio: ";
	cin>>peso;
	
	//controllo
	if(peso<TETTO)
		cout<<"Il tuo bagaglio non supera i 20 chili; Dovrai pagare il prezzo originale di: "<<prezzo<<" euro. Buon viaggio!";
		
	//calcolo eccedente
	else if(peso>TETTO){
		pesoEcc=peso-TETTO;
		
		for(int i=0; i<pesoEcc; i++)
			prezzo += prezzo*TASSA/100;
			
		cout<<"Il tuo bagaglio supera i 20 chili; devi pagare un totale di: "<<prezzo<<" euro.";
	}			
}

void es18(){
	system("color A");
	
	int num=0, somma=0, i=2;
	
	cout<<"Inserisci una serie di numeri positivi e negativi; verra' fatta la somma dei valori assoluti. Inserisci 0 per finire l'inserimento"<<endl;
	
	//input
	cout<<"Inserisci il primo numero: ";
	cin>>num;
	
	//calcolo
	while(num!=0){
		num = abs(num);
		
		somma += num;
		
		cout<<"Inserisci il "<<i<<"^ numero: ";
		cin>>num;
		
		i++;
	}
		
	cout<<"La somma dei vlori assoluti dei tuoi numeri e': "<<somma<<".";
}

void es19(){
	system("color A");
	
	int num=0, div=0, i=1, resto=0;
	
	//input
	cout<<"Inserisci un numero e ti verra' detto se e primo o no: ";
	cin>>num;
	
	while(i<=num){
		resto = num%i;
		if(resto==0)
			div++;
			
		i++;
	}
	
	if(div==2)
		cout<<"Il numero "<<num<<" e' primo.";
	
	else
		cout<<"Il numero "<<num<<" non e' primo.";
}

void es20(){
	system("color A");
	
	int num1=0, num2=0, somma=0, temp;
	
	cout<<"Questo programma fa il prodotto tra due numeri interi utilizzando solo l'addizione."<<endl;
	
	//input
	cout<<"Inserisci il primo numero: ";
	cin>>num1;
	cout<<"Inserisci il secondo numero: ";
	cin>>num2;
	
	//risoluzione del problema che se num2<0 non funziona
	if(num2<0){
		temp = num1;
		num1 = num2;
		num2 = temp;
	}		
		
	//calcolo
	for(int i=0; i<num2; i++)
		somma += num1;
		
	cout<<"Il prodotto tra due numeri interi e': "<<somma<<".";
}

void es21(){
	system("color A");
	
	int anno=0;
	
	//input
	cout<<"Inserisci un anno e ti verra' detto se e' bisestile o no: ";
	cin>>anno;
	
	//calcolo
	if(anno%4 == 0 || anno%400 == 0)
		cout<<"L'anno "<<anno<<" e' un anno bisestile.";
		
	else
		cout<<"L'anno "<<anno<<" non e' bisestile.";
}

void es22(){
	system("color A");
	
	int num=0, multipli=0;
	const int TETTO=100;			//numero massimo dei multipli
	
	//input
	cout<<"Inserisci un numero intero per conoscere i suoi multipli fino a 100: ";
	cin>>num;
	
	cout<<"I multipli del tuo numero sono: ";
	
	//calcoli
	while(multipli<TETTO){
		multipli += num;
		cout<<multipli<<", ";
	}		
}

void es23(){
	system("color A");
	
	int num=0, multipli=0;
	const int TETTO1=100, TETTO2=1000, TETTO3=10000;
	
	cout<<"Inserisci un numero intero per conoscere i suoi multipli;"<<endl;
	cout<<"Se il numero e' minore di 50 avrai i multipli fino a 100;"<<endl;
	cout<<"Se il numero e' maggiore di 50 e minore di 500 avrai i multipli fino a 1000;"<<endl;
	cout<<"Se il numero e' maggiore di 500 avrai i multipli fino a 10000."<<endl;
	
	//input
	cout<<"Inserici il numero: ";
	cin>>num;
	
	cout<<"I tuoi multipli sono: ";
	
	//calcoli
	if(num<50){
		while(multipli<TETTO1){
			multipli += num;
			cout<<multipli<<", ";
		}			
	}
	else if(num>=50 && num<=500){
		while(multipli<TETTO2){
			multipli += num;
			cout<<multipli<<", ";
		}			
	}
	else if(num>500){
		while(multipli<TETTO3){
			multipli += num;
			cout<<multipli<<", ";
		}			
	}		
}

void es24(){
	system("color A");
	
	int num=0, max=0, min=0, i=0;
	float somma=0, media=0; 
	
	cout<<"Inserisci 10 numeri e ti verra' detto il minimo, il massimo e la media finale."<<endl;
	
	//input e calcoli
	for(i=0; i<10; i++){
		cout<<"Inserisci il "<<i+1<<"^ numero: ";
		cin>>num;
		
		if(i==0){
			max=num;
			min=num;
		}
		if(num>max)
			max=num;
			
		if(num<min)
			min=num;
			
		somma += num;
	}
	media=somma/i;
	
	//output
	cout<<"Il numero massimo e': "<<max<<"."<<endl;
	cout<<"Il numero minimo e': "<<min<<"."<<endl;
	cout<<"La media dei numeri e': "<<media<<".";
}

void es25(){
	system("color A");
	
	const int TETTO=1000;
	int num=2, div, i=1, input;
	
	//inizio
	cout<<"Questo programma visualizza i numeri primi tra 2 e 1000. Premi 1 per iniziare: ";
	cin>>input;
	
	//numeri primi
	if(input==1){
		
		cout<<num<<endl;
    	num++;

    
	    while(num<TETTO){
			
	        div=2;
	
		    while(num%div>=1) 
		        div++;
		        
		    if (num==div) {
		        i++;
		        cout<<num<<endl;
		    }
		        
		    num++;
	    }
	}
	
	//controllo su input iniziale
	else if(input!=1)
		cout<<"Valore errato";
}

void es26(){
	system("color A");
	
	float kilometri=0, chili=0, totChili=0, totKilometri=0, totale=0;
	const float KILOMETRO=0.62, PESO=0.08, FISSO=52;
	
	cout<<"Questo programma calcola il costo di una spedizione in base al kilometraggio e ai chili dei prodotti da trasportare."<<endl;
	
	//input
	cout<<"Inserisci i kilometri da percorrere: ";
	cin>>kilometri;
	cout<<"Inserisci il peso espresso in chili: ";
	cin>>chili;
	
	//calcoli
	totChili = chili*PESO;
	totKilometri = kilometri*KILOMETRO;
	
	totale = FISSO+totChili+totKilometri;
	
	//output
	cout<<"Il totale da pagare per la spedizione ammonta a: "<<totale<<".";
}

void es27(){
	system("color A");
	
	int copie=0, diff1=0, diff2=0, i=0;
	float totale=0;
	const float PREZZO1=10, PREZZO2=8, PREZZO3=5;
	
	cout<<"Da 1 a 19 ogni copia costa 10 cent; da 20 a 100, 8 cent e per piu' di 100, 5 cent."<<endl;
	
	//input
	cout<<"Inserisci il numero di fotocopie: ";
	cin>>copie;
	
	//calcoli
	if(copie<=19)
		totale = copie*PREZZO1;

	else if(copie>=20 && copie<100){
		totale = PREZZO1*19;
		diff1 = copie-19;
		totale += diff1*PREZZO2;			
	}		
	else if(copie>100){
		totale = PREZZO1*19;
		diff1 = copie-19;
		diff2 = copie-100;
		totale += diff1*PREZZO2;
		totale += diff2*PREZZO3;		
	}
		
	if(totale<100)
		cout<<"Il totale da pagare ammonta a: "<<totale<<" centesimi.";
		
	else if(totale>=100){
		totale /= 100;
		cout<<"Il totale da pagare ammonta a: "<<totale<<" euro.";
	}
	
}

void es28(){
	system("color A");
	
	int classi=0, prom=0, promDeb=0, resp=0, percProm=0, percPromDeb=0, percResp=0, totaleProm=0, totalePromDeb=0, totaleResp=0, totale=0; 
	
	//input
	cout<<"Inserisci il numero di classi: ";
	cin>>classi;
	
	//dati delle classi e totali
	for(int i=1; i<=classi; i++){
		cout<<"Inserisci il numero di alunni promossi della "<<i<<"^ classe: ";
		cin>>prom;
		
		cout<<"Inserisci il numero di alunni promossi con debiti: ";
		cin>>promDeb;
		
		cout<<"Inserisci il numero di alunni respinti: ";
		cin>>resp;
		
		totale += prom+promDeb+resp;
		totaleProm += prom;
		totalePromDeb += promDeb;
		totaleResp += resp;
	}
		
	//calcolo percentuali
	percProm = (totaleProm*100)/totale;
	percPromDeb = (totalePromDeb*100)/totale;
	percResp = (totaleResp*100)/totale;
	
	//output
	cout<<"C'e' una percentuale di: "<<percProm<<"% di alunni promossi."<<endl;
	cout<<"C'e' una percentuale di: "<<percPromDeb<<"% di alunni promossi con debiti."<<endl;
	cout<<"C'e' una percentuale di: "<<percResp<<"% di alunni respinti.";
}

void es29(){
	system("color A");
	
	const int TETTO=1000;
	int num=1, div, i=1, input;
	
	cout<<"Questo programma mostra i primi 1000 numeri primi. Premi 1 per iniziare: ";
	cin>>input;

    //numeri primi
	if(input==1){
    	
    	cout<<num<<endl;
    	num++;

    	for(i; i<TETTO; num++) {

        	div=2;

	        while(num%div>=1) 
	            div++;
	        
	
	        if (num==div) {
	        	i++;
	        	cout<<num<<endl;
	        }
    	}
	}
	else if(input!=1)
		cout<<"Valore errato.";
}
	
void es30(){
	system("color A");
	
	int a=0, b=0, c=0, mcm;
	
	//input
	cout<<"Inserisci tre numeri per l'mcm: "<<endl;
	cin>>a>>b>>c;
			
	//calcolo mcm
	mcm = a*b*c;
	
	for(int i=mcm; i>0; i--){
		if(i%a==0 && i%b==0 && i%c==0)
			mcm=i;
	}
	
	//output
	cout<<"Il minimo comune multiplo e': "<<mcm;
}

void es31(){
	system("color A");
	
	int base, i=1, amp=1;
	float space=40; 
	
	cout<<"Construisci l'albero di Natale inserendo la grandezza della base."<<endl;
	cout<<"(Consigliato tra 5-20) \tInsersci la base: ";
	cin>>base;
	
	if(base<5){
		cout<<"Troppo piccolo, impossibile creare.";
		exit(0);
	}
		
	if(base>20){
		cout<<"Troppo grande, impossibile creare.";
		exit(0);
	}
			
	while(amp<=base){
		
		cout<<setw(space);
		
		for(int i=1; i<=amp; i++){
			cout<<'*';
		}
		
		cout<<endl;		
		amp++;
		
		space -= 0.5;
	}
	
	for(int k=1; i<=2; i++)
		cout<<setw(40)<<"**"<<endl;
		
		
}

int main(){
	int scelta;
	do{
		system("color F");
		
		cout<<"\n------------------------------"<<endl;
		cout<<"\nEs1: Positivi-negativi."<<endl;
		cout<<"Es2: Somma-sottr-modulo."<<endl;
		cout<<"Es3: Sconto."<<endl;
		cout<<"Es4: Tre numeri diversi."<<endl;
		cout<<"Es5: Intervallo chiuso."<<endl;
		cout<<"Es6: Lati triangolo."<<endl;
		cout<<"Es7: Si o no."<<endl;
		cout<<"Es8: Quoziente e resto."<<endl;
		cout<<"Es9: Tre numeri crescenti."<<endl;
		cout<<"Es10: Quadrato di un numero."<<endl;
		cout<<"Es11: Area cerchio."<<endl;
		cout<<"Es12: Lettere prima e dopo."<<endl;
		cout<<"Es13: Lettere seguenti."<<endl;
		cout<<"Es14: Orario."<<endl;
		cout<<"Es15: Codice ASCII."<<endl;
		cout<<"Es16: Tariffa parcheggio."<<endl;
		cout<<"Es17: Peso bagablio."<<endl;
		cout<<"Es18: Valore assoluto."<<endl;
		cout<<"Es19: Numero primo."<<endl;
		cout<<"Es20: Prodotto-addizione."<<endl;
		cout<<"Es21: Anni bisestili."<<endl;
		cout<<"Es22: Multipli."<<endl;
		cout<<"Es23: Multipli alti."<<endl;
		cout<<"Es24: Max-Min-Media."<<endl;
		cout<<"Es25: Primi tra 2 e 100."<<endl;
		cout<<"Es26: Trasporti azienda."<<endl;
		cout<<"Es27: Fotocopie."<<endl;
		cout<<"Es28: Classi promossi-bocciati."<<endl;
		cout<<"Es29: 1000 numeri primi."<<endl;
		cout<<"Es30: Minimo comune multiplo."<<endl;
		cout<<"Es31: Albero di Natale."<<endl;
		cout<<"0: Termina."<<endl;
		cin>>scelta;
		
		switch(scelta){
			case 0:
				break;
				
			case 1:
				es1();
				break;
			
			case 2:
				es2();
				break;
				
			case 3:
				es3();
				break;
				
			case 4:
				es4();
				break;
				
			case 5:
				es5();
				break;
				
			case 6:
				es6();
				break;
				
			case 7:
				es7();
				break;
				
			case 8:
				es8();
				break;
				
			case 9:
				es9();
				break;
				
			case 10:
				es10();
				break;
				
			case 11:
				es11();
				break;
				
			case 12:
				es12();
				break;
				
			case 13:
				es13();
				break;
				
			case 14:
				es14();
				break;
				
			case 15:
				es15();
				break;
				
			case 16:
				es16();
				break;
				
			case 17:
				es17();
				break;
				
			case 18:
				es18();
				break;
				
			case 19:
				es19();
				break;
				
			case 20:
				es20();
				break;
				
			case 21:
				es21();
				break;
				
			case 22:
				es22();
				break;
				
			case 23:
				es23();
				break;
			
			case 24:
				es24();
				break;
				
			case 25:
				es25();
				break;
				
			case 26:
				es26();
				break;
				
			case 27:
				es27();
				break;
				
			case 28:
				es28();
				break;
				
			case 29:
				es29();
				break;
				
			case 30:
				es30();
				break;
				
			case 31:
				es31();
				break;
				
			default:
				cout<<"Numero errato.";
		}
	} while(scelta!=0);
				
	return 0;
}