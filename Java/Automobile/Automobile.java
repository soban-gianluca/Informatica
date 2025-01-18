public class Automobile {
    private String marca;
    private String modello;
    private String colore;
    private int capienza;
    private String targa;
    private int numPorte;
    private String carburante;
    private int velMax;
    private double consumoCarb;
    private int kmTotali;
    private int kmParziali;
    private int velAttuale;
    private int capacita;
    private int livelloSerbatoio;
    private boolean accSpen;

    public Automobile(String marca, String modello, String colore, int capienza, int capacita, String targa, int numPorte, String carburante, int velMax, double consumoCarb, int kmTotali, int livelloSerbatoio){
        this.marca = marca;
        this.modello = modello;
        this.colore = colore;
        this.capienza = capienza;
        this.capacita = capacita;
        this.targa = targa;
        this.numPorte = numPorte;
        this.carburante = carburante;
        this.velMax = velMax;
        this.consumoCarb = consumoCarb;
        this.kmTotali = kmTotali;
        this.livelloSerbatoio = livelloSerbatoio;
        this.accSpen = false;
        this.kmParziali = 0;
    }

    public void setVelAttuale(int velAttuale) {
        this.velAttuale = velAttuale;
    }

    public void setKmTotali(int kmTotali) {
        this.kmTotali = kmTotali;
    }

    public void setKmParziali(int kmParziali) {
        this.kmParziali = kmParziali;
    }

    public boolean accensioneSpegnimento(){
        this.accSpen = this.accSpen != true;
        return accSpen;
    }

    public boolean muoviti(int spostamento, int range, int velAttuale){
        boolean movimento = false;

        if(accSpen) {
            if(velAttuale <= 0 && spostamento > range) 
                movimento = false;
                 
            else {
                movimento = true; 
            }     
        }

        return movimento;
    }

    public int faiRifornimento(){
        return livelloSerbatoio = 100;
    }

    public int incrementaDecrementaVelocita(int incremento){
        velAttuale += incremento;

        if(velAttuale < 0)
            velAttuale = 0;

        if(velAttuale > velMax)
            velAttuale = velMax;

        return velAttuale;
    }

    public int calcolaRange(int capacita, double consumoCarb, int livelloSerbatoio){
        int range, litriDisponibili;

        litriDisponibili = (capacita*livelloSerbatoio)/100;

        range = (int) ((litriDisponibili*100)/consumoCarb);

        return range;
    }

    @Override 
    public String toString() {
        return   "Marca: " + marca + ", Modello: " + modello + ", Colore: " + colore +
                "\nTarga: " + targa + ", Capienza: " + capienza + ", Numero di porte: " + numPorte + 
                "\nVelocita' massima: " + velMax + ", Chilometri totali: " + kmTotali + ", Tipo carburante: " + carburante +
                "\nConsumo carburante: " + consumoCarb + ", Capacita' serbatoio: " + capacita + ", Livello serbatoio: " + livelloSerbatoio;
    }
}