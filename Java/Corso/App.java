import java.util.Scanner;

public class App{
    static String nomeCorso;
    static Studente[] studenti;
    static String nome;
    static int matricola;
    static Scanner tastiera = new Scanner(System.in);
    public static void main(String[] args){
        System.out.print("Inserisici il nome del corso: ");
        nomeCorso = tastiera.nextLine();

        System.out.print("Inserisci il nome del primo studente: ");
        nome = tastiera.nextLine();
        Studente studente1 = new Studente(nome, 123);

        System.out.print("Inserisci il nome del secondo studente: ");
        nome = tastiera.nextLine();
        Studente studente2 = new Studente(nome, 456);

        System.out.print("Inserisci il nome del terzo studente: ");
        nome = tastiera.nextLine();
        Studente studente3 = new Studente(nome, 789);

        Corso corso1 = new Corso(nomeCorso, studenti);

        System.out.println(corso1.toString());
        System.out.println(studente1.toString());
        System.out.println(studente2.toString());
        System.out.println(studente3.toString());
        
    }
}