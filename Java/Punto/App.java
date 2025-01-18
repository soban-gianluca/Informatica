import java.util.Scanner;
import java.lang.Math;

public class App{

    public static void spostaPunto(double direction, double distanza, Punto punto){
        double x, y;
        
        x = punto.getX() + distanza*Math.cos(direction);
        punto.setX(x);
        y = punto.getY() + distanza*Math.sin(direction);
        punto.setY(y);
    }

    public static double calcolaDistanza(Punto punto1, Punto punto2){
        double dist = 0;
        dist = Math.sqrt((Math.pow(punto2.getX() - punto1.getX(), 2)) + (Math.pow(punto2.getY() - punto1.getY(), 2)));
        return dist;
    }
    public static void main(String[] args){
        double x;
        double y;
        double direction, distanza, dist;
        int scelta;
        double puntiMultipli = 0, sceltaPunto=0;
        Scanner tastiera = new Scanner(System.in);
        Punto punto1 = new Punto();
        Punto punto2 = new Punto();

        System.out.print("Inserisci 1 se vuoi utilizzare un punto solo, 2 per punti multipli: ");
        do{
            puntiMultipli = tastiera.nextInt();
            if(puntiMultipli<1 || puntiMultipli > 2)
                System.err.print("Valore non consentito, inserisci di nuovo: ");
        }while(puntiMultipli<1 || puntiMultipli > 2);
        
        if(puntiMultipli == 1){
            System.out.print("Inserisci la x del punto: ");
            x = tastiera.nextInt();
            punto1.setX(x);
            System.out.print("Inserisci la y del punto: ");
            y = tastiera.nextInt();
            punto1.setY(y);
            System.out.println(punto1.toString());

            do{
                System.out.println("\nInserisci 1 per spostare il punto con le cordinate finali.");
                System.out.println("Seleziona 2 per spostare il punto con la direzione.");
                System.out.println("Seleziona 0 per uscire.");
                System.out.println("Inserisci la tua scelta: ");
                do{
                    scelta = tastiera.nextInt();
                    if(scelta<0 || scelta>2)
                        System.err.print("Valore non valido, inserisci di nuovo: ");
                }while(scelta<0 || scelta>2);
            
                switch (scelta) {
                    case 1:
                        System.out.print("Inserisci la x finale del punto: ");
                        x = tastiera.nextInt();
                        punto1.setX(x);
                        System.out.print("Inserisci la y finale del punto: ");
                        y = tastiera.nextInt();
                        punto1.setY(y);

                        System.out.println(punto1.toString());
                        break;
    
                    case 2:
                        System.out.print("Inserisci la direzione in cui vuoi spostare il punto: ");
                        direction = tastiera.nextInt();
                        punto1.setDirection(direction);
                        System.out.print("Inserisci la distanza per spostare il punto: ");
                        distanza = tastiera.nextInt();

                        spostaPunto(direction, distanza, punto1);

                        System.out.println(punto1.toString());
                        
                        break;
                
                    default:
                        if(scelta != 0)
                            System.err.println("OPS! Qualcosa e' andato storto!");
                        break;
                }
            }while(scelta != 0);

        } else {
            System.out.print("Inserisci la x del primo punto: ");
            x = tastiera.nextInt();
            punto1.setX(x);
            System.out.print("Inserisci la y del primo punto: ");
            y = tastiera.nextInt();
            punto1.setY(y);

            System.out.print("Inserisci la x del secondo punto: ");
            x = tastiera.nextInt();
            punto2.setX(x);
            System.out.print("Inserisci la y del secondo punto: ");
            y = tastiera.nextInt();
            punto2.setY(y);

            System.out.println(punto1.toString());
            System.out.println(punto2.toString());
            
            do{
                System.out.println("Seleziona 1 per spostare il punto con le cordinate finali.");
                System.out.println("Seleziona 2 per spostare il punto con la direzione.");
                System.out.println("Seleziona 3 per calcolare la distanza tra i due punti.");
                System.out.println("Seleziona 0 per uscire.");
                System.out.println("Inserisci la tua scelta: ");
                do{
                    scelta = tastiera.nextInt();
                    if(scelta<0 || scelta>3)
                        System.err.print("Valore non valido, inserisci di nuovo: ");
                }while(scelta<0 || scelta>3);
            
                switch (scelta) {
                    case 1:
                        System.out.print("Quale punto vuoi spostare 1 o 2: ");
                        do{
                            sceltaPunto = tastiera.nextInt();
                            if(sceltaPunto < 1 || sceltaPunto > 2)
                                System.err.print("Valore non valido, inserisci di nuovo: ");
                        }while(sceltaPunto < 1 || sceltaPunto > 2);
                        
                        if(sceltaPunto == 1){
                            System.out.print("Inserisci la x finale del punto: ");
                            x = tastiera.nextInt();
                            punto1.setX(x);
                            System.out.print("Inserisci la y finale del punto: ");
                            y = tastiera.nextInt();
                            punto1.setY(y);
                            System.out.println(punto1.toString());
                        } else {
                            System.out.print("Inserisci la x finale del punto: ");
                            x = tastiera.nextInt();
                            punto2.setX(x);
                            System.out.print("Inserisci la y finale del punto: ");
                            y = tastiera.nextInt();
                            punto2.setY(y);
                            System.out.println(punto2.toString());
                        }

                        break;
    
                    case 2:
                        System.out.print("Quale punto vuoi spostare 1 o 2: ");
                        do{
                            sceltaPunto = tastiera.nextInt();
                            if(sceltaPunto < 1 || sceltaPunto > 2)
                                System.err.print("Valore non valido, inserisci di nuovo: ");
                        }while(sceltaPunto < 1 || sceltaPunto > 2);
                        
                        if(sceltaPunto == 1){
                            System.out.print("Inserisci la direzione in cui vuoi spostare il punto: ");
                            direction = tastiera.nextInt();
                            punto1.setDirection(direction);
                            System.out.print("Inserisci la distanza per spostare il punto: ");
                            distanza = tastiera.nextInt();

                            spostaPunto(direction, distanza, punto1);

                            System.out.println(punto1.toString());
                        } else {
                            System.out.print("Inserisci la direzione in cui vuoi spostare il punto: ");
                            direction = tastiera.nextInt();
                            punto2.setDirection(direction);
                            System.out.print("Inserisci la distanza per spostare il punto: ");
                            distanza = tastiera.nextInt();

                            spostaPunto(direction, distanza, punto2);

                            System.out.println(punto2.toString());
                        }
                        
                        break;
    
                    case 3:
                        dist = calcolaDistanza(punto1, punto2);
                        System.out.println("La distanza tra i due punti e': " + dist);
                        break;
                
                    default:
                        if(scelta!=0)
                            System.err.println("OPS! Qualcosa e' andato storto!");
                        break;
                }
            }while(scelta != 0);
            
        }
        tastiera.close();
    }
}