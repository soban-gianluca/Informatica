import java.util.Random;
import java.util.Scanner;

public class AppBinario {
    public static void main(String[] args) {
        final int DIM = 10000;
        int[] arr1 = new int[DIM];
        int[] arr2 = new int[DIM];
        int[] arr3 = new int[DIM];
        int ricerca, chiave;

        Scanner tastiera = new Scanner(System.in);
        Random rand = new Random();

        for(int i=0; i<DIM; i++){
            arr1[i] = rand.nextInt(DIM*10);
        }

        for(int i=0; i<DIM; i++){
            arr2[i] = arr1[i];
            arr3[i] = arr1[i];
        }

        //tempi esecuzione del BubbleSort
        long tempoInizio = System.currentTimeMillis();
        Binario.bubbleSort(arr1);
        long tempoFine = System.currentTimeMillis();
        System.out.println("\nDurata del BubbleSort: " + (tempoFine-tempoInizio) + " ms.");

        //tempi esecuzione del SelectionSort
        tempoInizio = System.currentTimeMillis();
        Binario.seleSort(arr2);
        tempoFine = System.currentTimeMillis();
        System.out.println("\nDurata del SelectionSort: " + (tempoFine-tempoInizio) + " ms.");

        //tempi esecuzione del InsertionSort
        tempoInizio = System.currentTimeMillis();
        Binario.insertionSort(arr3);
        tempoFine = System.currentTimeMillis();
        System.out.println("\nDurata del InsertionSort: " + (tempoFine-tempoInizio) + " ms.");

        //ricerca dell'elemento con rispettivi tempi di esecuzione
        System.out.print("\nInserisci un valore da 1 a 100000 da ricercare nell'array: ");
        chiave = Integer.parseInt(tastiera.nextLine());

        tempoInizio = System.nanoTime();
        ricerca = Binario.ricercaLineare(arr1, chiave);
        tempoFine = System.nanoTime();
        System.out.println("\nLa ricerca lineare e' durata " + (tempoFine-tempoInizio) + " nano secondi.");

        tempoInizio = System.nanoTime();
        ricerca = Binario.ricercaBinaria(arr2, chiave);    
        tempoFine = System.nanoTime();
        System.out.println("La ricerca binaria e' durata " + (tempoFine-tempoInizio) + " nano secondi.");
            
        if(ricerca == -1)
            System.out.print("\n----> Il numero ricercato non e' presente.");
        else{
            System.out.print("\n----> Il numero ricercato e' in posizione: ");
            System.out.print(ricerca+1);
        }  

        tastiera.close();
    } 
}