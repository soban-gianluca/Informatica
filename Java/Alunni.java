/*Dati in input il numero di allievi e quello delle allieve di una scuola, 
calcolare la percentuale di maschi e di femmine di ogni classe e di tutta la scuola. Usare i sottoprogrammi.*/

import java.util.Scanner;

public class Alunni {
    
    static Scanner tastiera = new Scanner(System.in);

    public static float GetPercM(int totAlunni, int m){
        float percM=0;

        percM = (float)m*100/totAlunni;

        return percM;
    }

    public static float GetPercF(int totAlunni, int f){
        float percF=0;

        percF = (float)f*100/totAlunni;

        return percF;
    }
    public static void main(String[] args){
        int totAlunni=0, m=0, f=0;
        float percM=0, percF=0;

        System.out.print("Inserisci il numero di alunni totali: ");
        totAlunni = tastiera.nextInt();

        System.out.print("Inserisci il numero di maschi: ");
        do{
            m = tastiera.nextInt();
            if(m > totAlunni)
                System.err.print("Numero impossibile, inserisci di nuovo: ");
        }while(m > totAlunni);
        
        System.out.print("Inserisci il numero di femmine: ");
        do{
            f = tastiera.nextInt();
            if(f > totAlunni)
                System.err.print("Numero impossibile, inserisci di nuovo: ");
        }while(f > totAlunni);

        percM = GetPercM(totAlunni, m);
        percF = GetPercF(totAlunni, f);

        System.out.println("La percentuale di maschi nella scuola e': " + percM + "%.");
        System.out.print("La percentuale di femmine nella scuola e': " + percF + "%.");
    }
}