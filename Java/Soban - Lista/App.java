import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner tastiera = new Scanner(System.in);
        int scelta;
        String rimosso;

        System.out.print("Inserisci il primo valore: ");
        String carattere = tastiera.nextLine();
        
        Elemento primo = new Elemento(carattere);
        Lista lista = new Lista(primo);
        
        do{
            System.out.println("\nCosa vuoi eseguire: ");
            System.out.println("Inserisci 1 per aggiungere un carattere.");
            System.out.println("Inserisci 2 per togliere l'ultimo elemento.");
            System.out.println("Inserisci 3 per stampare.");
            System.out.println("Inserisci 0 per uscire.");
            System.out.print("Inserisci la tua scelta: ");
            scelta = Integer.parseInt(tastiera.nextLine());

            switch (scelta) {
                case 1:
                    System.out.print("Inserisci il carattere da aggiungere: ");
                    String elemento = tastiera.nextLine();
                    lista.push(elemento);
                    break;

                case 2:
                    rimosso = lista.pop();
                    System.out.println("Il carattere rimosso dalla lista e': " + rimosso + ".");
                    break;

                case 3:
                    System.out.println(lista.toString());
                    break;
            
                default:
                    System.err.println("Valore errato, inserisci di nuovo: ");
                    break;
            }

        }while(scelta != 0); 

        tastiera.close();
    }
}