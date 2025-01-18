import java.util.Scanner;

public class Fattoriale{

    static Scanner tastiera = new Scanner(System.in);

    public static void main(String[] args){
        int num=0, fatt=1;

        System.out.print("Inserisci il numero per il fattoriale: ");
        num = tastiera.nextInt();

        for(int i=2; i<=num; i++)
            fatt *= i;
        
        System.out.println("Il fattoriale di " + num + " e': " + fatt + ".");
    }
}