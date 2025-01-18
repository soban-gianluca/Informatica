package ArrayUtils;
import java.util.Scanner;

public class App {
    public static void main(String[] args){
        Scanner tastiera = new Scanner(System.in);
        int dim=0, scelta=0;

        System.out.print("Inserisci la dimesione dell'array: ");
        dim = Integer.parseInt(tastiera.nextLine());

        int[] array = new int[dim];

        for(int i=0; i<dim; i++){
            System.out.print("Inserisci il " + (i+1) + " elemento: ");
            array[i] = Integer.parseInt(tastiera.nextLine());
        }

        System.out.println("Array non ordinato: ");
        System.out.println(ArrayUtils.toString(array));

        System.out.print("BubbleSort oppure SeleSort: Inserire 1 o 2: ");
        do{
            scelta = Integer.parseInt(tastiera.nextLine());
            if(scelta<1 || scelta>2)
                System.err.println("Errore, inserisci di nuovo: ");
        }while(scelta<1 || scelta>2);

        switch (scelta) {
            case 1:
                ArrayUtils.bubbleSort(array);
                break;

            case 2:
                ArrayUtils.seleSort(array);
                break;
        
            default:
                System.err.println("Errore.");
                break;
        }
        
        System.out.println("Array ordinato: ");
        System.out.println(ArrayUtils.toString(array));
            
        tastiera.close();
    }
}