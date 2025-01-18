public class Auto extends Veicolo{
    private int numPorte;

    public Auto(String marca, int anno, int numPorte){
        super(marca, anno);
        this.numPorte = numPorte;
    }

    public void avvia(){
        System.out.println("Avvio auto.");
    }

    @Override
    public String toString() {
        return "Automobile: " + super.toString() + "Numero di porte: " + numPorte;
    }
}