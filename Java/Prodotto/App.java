import java.util.Scanner;

public class App {

    static void mostraDettagli(Prodotto prod1){
        System.out.println("");
        System.out.println("Nome del prodotto: " + prod1.getNome());
        System.out.println("Prezzo del prodotto: " + prod1.getPrezzo());
        System.out.println("Quantita' del prodotto: " + prod1.getQuantita());
    }

    public static void main(String[] args){
        String nome;
        double prezzo;
        int quantita;

        Scanner tastiera = new Scanner(System.in);

        Prodotto prod1 = new Prodotto();

        System.out.print("Inserisci il nome del prdotto: ");
        prod1.setNome(nome = tastiera.next());
        System.out.print("Inserisci il prezzo del prdotto: ");
        prod1.setPrezzo(prezzo = tastiera.nextDouble());
        System.out.print("Inserisci la quantita' del prdotto: ");
        prod1.setQuantita(quantita = tastiera.nextInt());
        
        mostraDettagli(prod1);

        tastiera.close();
    }
}