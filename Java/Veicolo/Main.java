public class Main {
    public static void main(String[] args) {
        Veicolo[] arr = new Veicolo[2];

        Auto auto = new Auto("Toyota", 2020, 4);
        arr[0] = auto;

        Bicicletta bici = new Bicicletta("Bianchi", 2018, true);
        arr[1] = bici;

        for(int i=0; i<2; i++)
            arr[i].avvia();

        for(int i=0; i<2; i++)
            System.out.println(arr[i].toString());
    }
}