package ArrayUtils;
import java.util.Arrays;

public class ArrayUtils{

    public static void bubbleSort(int[] array){
        boolean scambio = true;
        for(int i=0; i<array.length && scambio; i++){
            scambio = false;
            for(int j=0; j<array.length - 1; j++)
                if(array[j] > array[j+1]){
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                    scambio=true;
                }
        }
    }

    public static void seleSort(int[] array){
        for(int i=0; i<array.length-1; i++){
            int min = i;

            for(int j = i+1; j<array.length; j++)
                if(array[min] > array[j])
                    min = j;
            
            if(min != i){
                int temp = array[i];
                array[i] = array[min];
                array[min] = temp;
            }
        }
    }

    public static String toString(int[] array){
        return Arrays.toString(array);
    }
}