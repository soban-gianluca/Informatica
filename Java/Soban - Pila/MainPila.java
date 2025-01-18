import java.util.Scanner;

public class MainPila {
    public static void main(String[] args) {
        Pila pila = new Pila();
        Scanner tastiera = new Scanner(System.in);
        int scelta, risultato;

        do{
            System.out.println("\nCosa vuoi eseguire: ");
            System.out.println("Inserisci 1 per aggiungere un numero.");
            System.out.println("Inserisci 2 per togliere l'ultimo elemento.");
            System.out.println("Inserisci 3 per stampare.");
            System.out.println("Inserisci 0 per uscire.");
            System.out.print("Inserisci la tua scelta: ");
            scelta = Integer.parseInt(tastiera.nextLine());
            switch (scelta) {
                case 1:
                    System.out.print("Inserisci il numero: ");
                    pila.push(Integer.parseInt(tastiera.nextLine()));
                    break;
            
                case 2:
                    risultato = pila.pop();
                    if(risultato == -1)
                        System.out.println("Pila vuota.");
                    else
                        System.out.println("Elemento tolto: " + risultato);
                    
                    break;

                case 3:
                    System.out.println(pila.toString());
                    break;

                default:
                    if(scelta != 0)
                        System.out.println("Valore errato, inserisci di nuovo: ");
                    break;
            }
        }while(scelta != 0);
        
        tastiera.close();
    }
}