import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String marca;
        String modello;
        String colore;
        int capienza;
        String targa;
        int numPorte;
        String carburante;
        int velMax;
        double consumoCarb;
        int kmTotali;
        int kmParziali=0;
        int velAttuale=0;
        int capacita;
        int livelloSerbatoio;
        int scelta=0;
        int range;
        boolean movimento; 
        int spostamento;
        int incremento;
        boolean accSpen = false;
        Scanner tastiera = new Scanner(System.in);

        System.out.print("Inserisci la marca dell'auto: ");
        marca = tastiera.nextLine();
        System.out.print("Inserisci il modello della macchina: ");
        modello = tastiera.nextLine();
        System.out.print("Inserisci il colore della macchina: ");
        colore = tastiera.nextLine();
        System.out.print("Inserisci la capienza della macchina: ");
        capienza = Integer.parseInt(tastiera.nextLine());
        System.out.print("Inserisci la capienza del serbatoio: ");
        capacita = Integer.parseInt(tastiera.nextLine());
        System.out.print("Inserisci la targa della macchina: ");
        targa = tastiera.nextLine();
        System.out.print("Inserisci il numero di porte: ");
        numPorte = Integer.parseInt(tastiera.nextLine());
        System.out.print("Inserisci la velocita' massima: ");
        velMax =Integer.parseInt(tastiera.nextLine());
        System.out.print("Inserisci il consumo di carburante: (l/100km kw/100km): ");
        consumoCarb = Double.parseDouble(tastiera.nextLine());
        System.out.print("Inserisci i chilometri totali della macchina: ");
        kmTotali = Integer.parseInt(tastiera.nextLine());
        System.out.print("Inserisci il tipo di carburante: G, B, E, H: ");
        carburante = tastiera.nextLine();
        System.out.print("Inserisci il livello del serbatoio in percentuale di 100: ");
        livelloSerbatoio = Integer.parseInt(tastiera.nextLine());

        Automobile auto1 = new Automobile(marca, modello, colore, capienza, capacita,targa, numPorte, carburante, velMax, consumoCarb, kmTotali, livelloSerbatoio);
        System.out.println("\n");
        System.out.println(auto1.toString());

        do{
            System.out.println("\nInserisci 1 per accendere la macchina.");    
            System.out.println("Inserisci 2 per impostare la velocita'.");
            System.out.println("Inserisci 3 per eseguire uno spostamento.");
            System.out.println("Inserisci 4 per fare il pieno.");
            System.out.println("Inserisci 5 per fare una variazione alla velocita'.");
            System.out.println("Inserisci 6 per stampare le caratteristiche.");
            System.out.println("Inserisci 0 per uscire.");
            System.out.print("\nInserisci la tua scelta: ");
            scelta = Integer.parseInt(tastiera.nextLine());

            switch (scelta) {
                case 1:
                    accSpen = auto1.accensioneSpegnimento();
                    if(accSpen)
                        System.out.println("Auto avviata.");
                    else
                        System.out.println("Auto spenta.");

                    break;

                case 2:
                    System.out.print("Inserisci la velocita' attuale: ");
                    do{
                        velAttuale = Integer.parseInt(tastiera.nextLine());
                        auto1.setVelAttuale(velAttuale);
                        if(velAttuale>velMax)
                            System.err.print("Impossibile andare piu' veloce della velocita' massima, inserire di nuovo: ");
                    }while(velAttuale>velMax);

                    break;
            
                case 3:
                    if(accSpen && velAttuale>0) {
                        range = auto1.calcolaRange(capacita, consumoCarb, livelloSerbatoio);
                        System.out.println("Range: " + range + " Km.");

                        System.out.print("Inserisci di quanti chilometri ti devi spostare: ");
                        spostamento = Integer.parseInt(tastiera.nextLine());
                                
                        movimento = auto1.muoviti(spostamento, range, velAttuale);
                        livelloSerbatoio -= (spostamento * consumoCarb)/100;
                
                        if(movimento) {
                            System.out.println("Spostamento completato.");

                            kmTotali += spostamento;
                            auto1.setKmTotali(kmTotali);
                            kmParziali += spostamento;
                            auto1.setKmParziali(kmParziali);

                            System.out.println("Livello serbatoio: " + livelloSerbatoio);
                            System.out.println("Chilometri totali: " + kmTotali);
                            System.out.println("Chilometri parziali: " + kmParziali);
                        }         
                        else {
                
                            System.out.println("Livello serbatoio troppo basso.");
                            System.out.print("Vuoi fare rifornimento? si 1, no 0: ");
                            scelta = Integer.parseInt(tastiera.nextLine());
                
                            if(scelta == 1){
                                livelloSerbatoio = auto1.faiRifornimento();
                                System.out.println("Livello serbatoio: " + livelloSerbatoio);
                
                                range = auto1.calcolaRange(capacita, consumoCarb, livelloSerbatoio);
                                movimento = auto1.muoviti(spostamento, range, velAttuale);
                
                                System.out.println("Spostamento completato.");
                            }
                            else
                                System.out.println("La tua auto si e' fermata per mancanza di carburante.");
                        }
                    }
                    else if(!accSpen)
                        System.err.println("Impossibile spostarsi con l'auto spenta.");
                    else  
                        System.err.println("Velocita' non valida, impostare una velocita'.");

                    break; 
                
                case 4:
                    livelloSerbatoio = auto1.faiRifornimento();
                    System.out.println("Livello serbatoio: " + livelloSerbatoio);
                    break;

                case 5:
                    System.out.print("Inserisci la variazione di velocita': ");
                    incremento = Integer.parseInt(tastiera.nextLine());
            
                    velAttuale = auto1.incrementaDecrementaVelocita(incremento);
                    System.out.println("Velocita' attuale: " + velAttuale);
                    break;
                
                case 6:
                    System.out.println(auto1.toString());
                    break;

                default:
                    if(scelta!=0)
                        System.err.println("Errore nell'esecuzione.");
                    break;
            }
        }while(scelta!=0);
        
        tastiera.close();
    }
}