/*Dati in imput N e due numeri interi, generare n numeri casuali compresi nell'intervallo.*/
import java.util.Scanner;

public class NumeriRandom{
    static Scanner tastiera = new Scanner(System.in);
    
    public static void main(String[] args){
        int num1=0, num2=0, n=0;

        System.out.print("Inserisci la quantita' di numeri da generare: ");
        do{
            n = tastiera.nextInt();
            if(n < 1)
                System.err.print("Inserire almeno un numero: ");
        }while(n<1);

        GetTettiMassimi(num1, num2);

    } 
}