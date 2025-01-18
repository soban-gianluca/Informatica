import java.util.Scanner;

public class Somma {
    static Scanner tastiera = new Scanner(System.in);
    public static void main(String[] args){
        int num1=0, num2=0, somma=0;

        System.out.print("Inserisci il primo numero della somma: ");
        num1 = tastiera.nextInt();
        System.out.print("Inserisci il secondo numero della somma: ");
        num2 = tastiera.nextInt();

        somma = num1 + num2;

        System.out.print("La somma dei due numeri e': " + somma + ".");
    }
}