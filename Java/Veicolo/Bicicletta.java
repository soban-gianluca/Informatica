public class Bicicletta extends Veicolo {
    boolean haCampanello;

    public Bicicletta(String marca, int anno, boolean haCampanello){
        super(marca, anno);
        this.haCampanello = haCampanello;
    }

    public void avvia(){
        System.out.println("Avvio bicicletta.");
    }

    @Override
    public String toString() {
        return "Bicicletta: " + super.toString() + "La bici ha il campanello: " + haCampanello;
    }
}