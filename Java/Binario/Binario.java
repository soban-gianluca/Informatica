public class Binario {
    private int[] arr;

    Binario(int[] arr){
        this.arr = arr;
    }

    public static void bubbleSort(int[] arr){
        boolean scambio=true;

        for(int i=0; i<arr.length && scambio; i++){
            scambio=false;

            for(int j=0; j<arr.length-1; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    scambio = true;
                }
            }
        }
    }

    public static void seleSort(int[] arr){
        for(int i=0; i<arr.length; i++){
            int min = i;

            for(int j=i+1; j<arr.length; j++){
                if(arr[min] > arr[j]){
                    min=j;
                }
            }

            if(min!=i){
                int temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
            }
        }
    }

    public static void insertionSort(int[] arr){
        for(int i=0; i<arr.length; i++)
            for(int j=i; j>0; j--)
                if(arr[j] < arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
    }

    public static int ricercaLineare(int[] arr, int chiave){
        int risultato = -1;

        for(int i=0; i<arr.length && risultato==-1; i++)
            if(arr[i] == chiave)
                risultato = i;

        return risultato;
    }

    public static int ricercaBinaria(int[] arr, int chiave) {
        int inf = 0, sup = arr.length-1;
        int risultato = -1;
    
        while(inf <= sup && risultato == -1){
            int med = (inf + sup) / 2;
    
            if (arr[med] == chiave) {
                risultato = med;
            } else if (arr[med] < chiave) {
                inf = med + 1;
            } else {
                sup = med-1;
            }
        }
    
        return risultato;
    }

    //metodo toString per visualizzare l'array in debug
    /* public static void toString(int[] arr){       
        for(int i=0; i<arr.length; i++)
            System.out.print(arr[i] + " ");
    } */
}