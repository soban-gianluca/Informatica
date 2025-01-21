/* TROVARE I NUMERI PRIMI ALL'INTERNO DELL'ARRAY */

public class App {
    public static void main(String[] args) {
        final int DIM = 1000000;
        int pMax = -1;
        int[] arr = new int[DIM];

        RicercaPrimi vettPrimi = new RicercaPrimi(pMax, arr);
        
        vettPrimi.popolaVett();

        long tempoInizio = System.currentTimeMillis();
        int maxPrimo = vettPrimi.trovaMassimoPrimo(arr);
        long tempoFine = System.currentTimeMillis();

        double tempoPassato = (tempoFine - tempoInizio) / 1000;

        System.out.println("Numero primo: " + maxPrimo);
        System.out.println("Tempo passato senza multithreading: " + tempoPassato + "s");

        tempoInizio = System.currentTimeMillis();
        maxPrimo = vettPrimi.trovaMassimoPrimoThreads(arr);
        tempoFine = System.currentTimeMillis();

        tempoPassato = (tempoFine - tempoInizio) / 1000;

        System.out.println("\n------------------------------------\n");
        System.out.println("Numero primo: " + maxPrimo);
        System.out.println("Tempo passato con multithreading: " + tempoPassato + "s");
    }
}