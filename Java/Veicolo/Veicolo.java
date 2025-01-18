public class Veicolo {
    private String marca;
    private int anno;

    public Veicolo(String marca, int anno){
        this.marca = marca;
        this.anno = anno;
    }

    public void avvia(){
        System.out.println("Avvio veicolo.");
    }

    @Override
    public String toString() {
        return "Marca: " + marca + ", Anno: " + anno + ", ";
    }
}