import java.util.Scanner;

public class Calcolatrice{

    static Scanner tastiera = new Scanner(System.in);

    public static float Somma(){
        float num1=0, num2=0, risultato=0;

        System.out.print("Inserisci il primo numero per la somma: ");
        num1 = tastiera.nextFloat();
        System.out.print("Inserisci il secondo numero per la somma: ");
        num2 = tastiera.nextFloat();

        risultato = num1+num2;

        return risultato;
    }

    public static float Sottrazione(){
        float num1=0, num2=0, risultato=0;

        System.out.print("Inserisci il primo numero per la sottrazione: ");
        num1 = tastiera.nextFloat();
        System.out.print("Inserisci il secondo numero per la sottrazione: ");
        num2 = tastiera.nextFloat();

        risultato = num1-num2;

        return risultato;
    }

    public static float Moltiplicazione(){
        float num1=0, num2=0, risultato=0;

        System.out.print("Inserisci il primo numero per la moltiplicazione: ");
        num1 = tastiera.nextFloat();
        System.out.print("Inserisci il secondo numero per la moltiplicazione: ");
        num2 = tastiera.nextFloat();

        risultato = num1*num2;

        return risultato;
    }

    public static float Divisione(){
        float num1=0, num2=0, risultato=0;

        System.out.print("Inserisci il primo numero per la divisione: ");
        num1 = tastiera.nextFloat();
        System.out.print("Inserisci il secondo numero per la divisione: ");
        do{
            num2 = tastiera.nextFloat();
            if(num2 == 0)
                System.out.print("Impossibile dividere per 0, inserire di niovo: ");
        }while(num2 == 0);

        risultato = num1/num2;

        return risultato;
    }

    public static void Calcolatore(int scelta){
        float risultato=0;

        switch (scelta) {
            case 1:
                risultato = Somma();
                System.out.print("La somma e' pari a: " + risultato + ".");
                break;

            case 2:
                risultato = Sottrazione();
                System.out.print("La sottrazione e' pari a: " + risultato + ".");
                break;

            case 3:
                risultato = Moltiplicazione();
                System.out.print("La moltiplicazione e' pari a: " + risultato + ".");
                break;

            case 4:
                risultato = Divisione();
                System.out.print("La divisione e' pari a: " + risultato + ".");
                break;
        
            default:
                System.err.print("Errore nell'esecuzione.");
                break;
        }
    }
    public static void main(String[] args){
        int scelta;

        System.out.println("Premere 1 per fare una somma.");
        System.out.println("Premere 2 per fare una sottrazione.");
        System.out.println("Premere 3 per fare una moltiplicazione.");
        System.out.println("Premere 4 per fare una divisione.");
        System.out.print("Inserisci la tua scelta: ");
        do{
            scelta = tastiera.nextInt();
            if(scelta<1 || scelta > 4)
                System.err.print("Errore, inserisci di nuovo: ");
        }while(scelta<1 || scelta > 4);
        
        Calcolatore(scelta);
    } 
}