import java.util.Random;

public class RicercaPrimi {
    final int NMAX = 10000000;
    final int DIM = 10000000;
    int pMax = -1;

    int[] arr = new int[DIM];

    Random rand = new Random();

    public RicercaPrimi(int pMax, int[] arr){
        this.pMax = pMax;
        this.arr = arr;
    }

    public void popolaVett(){
        for(int i=0; i<DIM; i++)
            arr[i] = rand.nextInt(NMAX + 1);        
    }

    public  boolean trovaPrimo(int num) {
        boolean primo = true;
        if (num <= 1) {
           primo = false;
        }
        
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                primo = false;
            }
        }

        return primo;
    }

    public int trovaMassimoPrimo(int[] vett) {
        int maxPrime = -1;
        
        for (int num : vett) {
            if (trovaPrimo(num) && num > maxPrime) {
                maxPrime = num;
            }
        }

        return maxPrime;
    }

    public int trovaMassimoPrimoThreads(int[] vett) {
        int nThread = 4;            //numero di thread da utilizzare
        Thread[] threads = new Thread[nThread];     //array di thread
        int[] maxPrimes = new int[nThread];

        for (int i = 0; i < nThread; i++) {
            int start = i * vett.length / nThread;      //calcolo indice inizio, fine per i thread
            int end = (i + 1) * vett.length / nThread;
            int[] subArray = new int[end - start];      
            
            System.arraycopy(vett, start, subArray, 0, end - start);      //copia dell'array a in subArray
            final int index = i;

            threads[index] = new Thread(() -> {         //creazione del thread
                maxPrimes[index] = trovaMassimoPrimo(subArray);         //calcolo num primo  
            });
            
            threads[i].start();     //avvio del thread
        }

        for (int i = 0; i < nThread; i++) {         //ciclo per attendere la fine dei threads
            try {
                threads[i].join();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        for (int i = 0; i < nThread; i++) {
            if (maxPrimes[i] > pMax) {
                pMax = maxPrimes[i];
            }
        }

        return pMax;
    }
}