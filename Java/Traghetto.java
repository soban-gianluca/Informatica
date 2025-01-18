import java.util.Scanner;

public class Traghetto{
    static Scanner tastiera = new Scanner(System.in);

    public static int GetCilindrata(){
        int cilindrata;

        System.out.print("Inserisci la cilindrata del tuo veicolo: ");
        cilindrata = tastiera.nextInt();

        return cilindrata;
    }

    public static int GetTotale(int scelta, int cilindrata){
        final int PREZZO1=20, PREZZO2=30, PREZZO3=40, PREZZO4=50, PREZZO5=80,  CILINDRATA1=1000, CILINDRATA2=2000, CILIDRATA3=3000;
        int totale=0;

        switch (scelta) {
            case 1:
                if(cilindrata < CILINDRATA1)
                    totale = PREZZO1;

                else if(cilindrata < CILINDRATA2)
                    totale = PREZZO2;

                else
                    totale = PREZZO3;

                break;

            case 2:
                if(cilindrata  < CILINDRATA2)
                    totale = PREZZO3;

                else if(cilindrata < CILIDRATA3)
                    totale = PREZZO4;

                else 
                    totale = PREZZO5;

                break;
        
            default:
                System.err.print("Errore nell'esecuzione");
                break;
        }

        return totale;
    }
    public static void main(String[] args){
        int cilindrata=0, scelta=0, totale=0;

        System.out.println("Premere 1 se si possiede un autoveicolo.");
        System.out.println("Premere 2 se si possiede un camion.");
        System.out.print("Inserire la propria scelta: ");
        do{
            scelta = tastiera.nextInt();
            if(scelta<1 || scelta>2)
                System.err.print("Errore, inserisci di nuovo: ");
        }while(scelta<1 || scelta>2);

        cilindrata = GetCilindrata();

        totale = GetTotale(scelta, cilindrata);

        System.out.print("Il totale da pagare ammonta a: " + totale + " euro.");
    }
}